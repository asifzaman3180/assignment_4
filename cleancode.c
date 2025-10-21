#include <stdio.h>

// Function to calculate sum of 3 subjects
int summation(int a, int b, int c) {
    return a + b + c;
}

// Function to calculate average and print grade
void average(int total, char *name) {
    float avg = total / 3.0;

    if (avg >= 80)
        printf("%s: Grade A (avg = %.2f)\n", name, avg);
    else if (avg >= 60)
        printf("%s: Grade B (avg = %.2f)\n", name, avg);
    else if (avg >= 40)
        printf("%s: Grade C (avg = %.2f)\n", name, avg);
    else
        printf("%s: Fail (avg = %.2f)\n", name, avg);
}

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char students[3][10] = {"Ali", "Bob", "Cat"};

    int i, sum;
    int maximum = 0, position = 0;

    // Print each student's grade
    for (i = 0; i < 3; i++) {
        sum = summation(marks[i][0], marks[i][1], marks[i][2]);
        average(sum, students[i]);
    }

    // Find topper
    for (i = 0; i < 3; i++) {
        sum = summation(marks[i][0], marks[i][1], marks[i][2]);
        if (sum > maximum) {
            maximum = sum;
            position = i;
        }
    }

    printf("\nTopper: %s with total %d\n", students[position], maximum);

    return 0;
}
