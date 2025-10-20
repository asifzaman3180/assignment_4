#include <stdio.h>
#include <string.h>

// Function to safely get a string input (removes newline)
void getStringInput(char *prompt, char *output, int size)
{
    printf("%s", prompt);
    if (fgets(output, size, stdin) != NULL)
    {
        size_t len = strlen(output);
        if (len > 0 && output[len - 1] == '\n')
            output[len - 1] = '\0';
    }
}

// Function to calculate average marks for one student
float calculateAverage(int marks[], int subjectCount)
{
    if (subjectCount <= 0)
        return 0.0; // Prevent division by zero

    int totalMarks = 0;
    for (int i = 0; i < subjectCount; i++)
    {
        if (marks[i] < 0)
        {
            printf("⚠️  Invalid mark detected (negative value). Treated as 0.\n");
            marks[i] = 0;
        }
        totalMarks += marks[i];
    }

    return totalMarks / (float)subjectCount;
}

// Function to display student's grade based on average marks
void displayGrade(const char studentName[], float averageMarks)
{
    if (strlen(studentName) == 0)
    {
        printf("⚠️  Invalid name detected. Skipping student.\n");
        return;
    }

    if (averageMarks >= 80)
        printf("%s: Grade A, Average = %.2f\n", studentName, averageMarks);
    else if (averageMarks >= 60)
        printf("%s: Grade B, Average = %.2f\n", studentName, averageMarks);
    else if (averageMarks >= 40)
        printf("%s: Grade C, Average = %.2f\n", studentName, averageMarks);
    else
        printf("%s: Fail, Average = %.2f\n", studentName, averageMarks);
}

// Function to find and display the topper
void findTopper(int marks[][3], char studentNames[][30], int studentCount, int subjectCount)
{
