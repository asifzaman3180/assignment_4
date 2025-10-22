#include <stdio.h>

// -----------------------------------------------
// Function: calculateAverage
// Purpose : To calculate the average marks of a student
// -----------------------------------------------
float calculateAverage(int total, int subjects) {
    return (float) total / subjects;
}

// -----------------------------------------------
// Function: getGrade
// Purpose : To return a grade character (A, B, C, F)
//           based on the student's average marks
// -----------------------------------------------
char getGrade(float average) {
    if (average >= 80)
        return 'A';
    else if (average >= 60)
        return 'B';
    else if (average >= 40)
        return 'C';
    else
        return 'F';
}

// -----------------------------------------------
// Function: printStudentResult
// Purpose : To display a student's name, grade, and average
// -----------------------------------------------
void printStudentResult(char name[], float average) {
    char grade = getGrade(average);

    if (grade == 'F')
        printf("%-10s | %-10s | Average: %.2f\n", name, "Fail", average);
    else
        printf("%-10s | Grade %-4c | Average: %.2f\n", name, grade, average);
}

int main() {
    // Student data: names and marks
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };

    int student, subject, total;
    float average;
    int highestTotal = 0, topperIndex = 0;

    // -----------------------------------------------
    // Display header for the result section
    // -----------------------------------------------
    printf("=========================================\n");
    printf("         STUDENT RESULT SUMMARY          \n");
    printf("=========================================\n\n");

    // Calculate and display each student's result
    for (student = 0; student < 3; student++) {
        total = 0;
        for (subject = 0; subject < 3; subject++) {
            total += marks[student][subject];
        }

        average = calculateAverage(total, 3);
        printStudentResult(names[student], average);

        // Track the highest total for topper
        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = student;
        }
    }

    // -----------------------------------------------
    // Display topper information
    // -----------------------------------------------
    printf("\n=========================================\n");
    printf("Topper: %-10s | Total Marks: %d\n", names[topperIndex], highestTotal);
    printf("=========================================\n");

    return 0;
}
