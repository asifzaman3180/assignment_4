#include <stdio.h>

// Function to calculate average marks
float calculateAverage(int total, int subjects) {
    return (float) total / subjects;
}

// Function to return grade based on average
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

// Function to print student name, grade, and average
void printStudentResult(char name[], float average) {
    char grade = getGrade(average);
    if (grade == 'F')
        printf("%s - Fail (Average = %.2f)\n", name, average);
    else
        printf("%s - Grade %c (Average = %.2f)\n", name, grade, average);
}

int main() {
    int marks[3][3] = {{50, 60, 70}, {80, 90, 100}, {30, 40, 50}};
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int student, subject, total;
    float average;

    int highestTotal = 0;
    int topperIndex = 0;

    for (student = 0; student < 3; student++) {
        total = 0;

        for (subject = 0; subject < 3; subject++) {
            total += marks[student][subject];
        }

        average = calculateAverage(total, 3);
        printStudentResult(names[student], average);

        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = student;
        }
    }

    printf("\nTopper: %s with total marks = %d\n", names[topperIndex], highestTotal);

    return 0;
}
