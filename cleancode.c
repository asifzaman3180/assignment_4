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
    else
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
