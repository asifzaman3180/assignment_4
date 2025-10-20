#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 3

void calculateAndDisplayGrades(int marks[][NUM_SUBJECTS], char names[][10]);
int calculateTotal(int marks[]);
char determineGrade(float average);
void displayTopper(int marks[][NUM_SUBJECTS], char names[][10]);

int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[NUM_STUDENTS][10] = {"Ali", "Bob", "Cat"};
    
    calculateAndDisplayGrades(marks, names);
    displayTopper(marks, names);
    
    return 0;
}

int calculateTotal(int marks[]) {
    int total = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        total += marks[i];
    }
    return total;
}

char determineGrade(float average) {
    if (average >= 80) return 'A';
    if (average >= 60) return 'B';
    if (average >= 40) return 'C';
    return 'F';
}

void calculateAndDisplayGrades(int marks[][NUM_SUBJECTS], char names[][10]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int total = calculateTotal(marks[i]);
        float average = total / (float)NUM_SUBJECTS;
        char grade = determineGrade(average);
        printf("%s Grade %c avg=%.2f\n", names[i], grade, average);
    }
}

void displayTopper(int marks[][NUM_SUBJECTS], char names[][10]) {
    int maxTotal = 0, topperIndex = 0;
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int total = calculateTotal(marks[i]);
        if (total > maxTotal) {
            maxTotal = total;
            topperIndex = i;
        }
    }
    
    printf("Topper: %s with total %d\n", names[topperIndex], maxTotal);
}