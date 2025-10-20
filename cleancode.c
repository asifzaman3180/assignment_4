#include <stdio.h>


float calculateAverage(int marks[], int numSubjects) {
    int total = 0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }
    return total / (float)numSubjects;
}


char getGrade(float average) {
    if (average >= 80)
        return 'A';
    else if (average >= 60)
        return 'B';
    else if (average >= 40)
        return 'C';
    else#include <stdio.h>

// Function to calculate the average marks of one student
float calculateAverage(int marks[], int numSubjects) {
    int total = 0;
    for (int i = 0; i < numSubjects; i++) {
        total += marks[i];
    }
    return total / (float)numSubjects;
}

// Function to determine the grade based on average marks
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

int main() {
    // Marks of 3 students in 3 subjects
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    
    // Names of students
    char names[3][10] = {"Ali", "Bob", "Cat"};

    int numStudents = 3, numSubjects = 3;
    float average;
    int total, highestTotal = 0, topperIndex = 0;

    // Display table header
    printf("=============================================\n");
    printf(" Student Name   |  Average  |  Grade\n");
    printf("=============================================\n");

    // Calculate and display each student's average and grade
    for (int student = 0; student < numStudents; student++) {
        average = calculateAverage(marks[student], numSubjects);
        char grade = getGrade(average);

        printf(" %-14s |   %.2f    |   %c\n", names[student], average, grade);
    }

    printf("=============================================\n");

    // Find the topper (student with highest total marks)
    for (int student = 0; student < numStudents; student++) {
        total = 0;
        for (int subject = 0; subject < numSubjec

        return 'F';
}

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[3][10] = {"Ali", "Bob", "Cat"};

    int numStudents = 3, numSubjects = 3;
    float average;
    int total, highestTotal = 0, topperIndex = 0;

    
    for (int student = 0; student < numStudents; student++) {
        average = calculateAverage(marks[student], numSubjects);
        char grade = getGrade(average);

        printf("%s Grade %c (avg = %.2f)\n", names[student], grade, average);
    }

    
    for (int student = 0; student < numStudents; student++) {
        total = 0;
        for (int subject = 0; subject < numSubjects; subject++) {
            total += marks[student][subject];
        }
        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = student;
        }
    }

    printf("\nTopper: %s with total %d\n", names[topperIndex], highestTotal);

    return 0;
}
