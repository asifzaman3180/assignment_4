#include <stdio.h>

// Function to calculate average marks for one student
float calculateAverage(int marks[], int subjectCount)
{
    int totalMarks = 0;
    for (int i = 0; i < subjectCount; i++)
    {
        totalMarks += marks[i];
    }
    return totalMarks / (float)subjectCount;
}

// Function to display student's grade based on average marks
void displayGrade(const char studentName[], float averageMarks)
{
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
void findTopper(int marks[][3], char studentNames[][10], int studentCount, int subjectCount)
{
    int highestTotal = 0;
    int topperIndex = 0;

    for (int studentIndex = 0; studentIndex < studentCount; studentIndex++)
    {
        int totalMarks = 0;
        for (int subjectIndex = 0; subjectIndex < subjectCount; subjectIndex++)
        {
            totalMarks += marks[studentIndex][subjectIndex];
        }
        if (totalMarks > highestTotal)
        {
            highestTotal = totalMarks;
            topperIndex = studentIndex;
        }
    }

    printf("\nTopper: %s with total marks = %d\n", studentNames[topperIndex], highestTotal);
}

int main()
{
    // Initialize data
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char studentNames[3][10] = {"Ali", "Bob", "Cat"};

    int studentCount = 3;
    int subjectCount = 3;

    // Display each student's grade
    for (int studentIndex = 0; studentIndex < studentCount; studentIndex++)
    {
        float averageMarks = calculateAverage(marks[studentIndex], subjectCount);
        displayGrade(studentNames[studentIndex], averageMarks);
    }

    // Find and display topper
    findTopper(marks, studentNames, studentCount, subjectCount);

    return 0;
}
