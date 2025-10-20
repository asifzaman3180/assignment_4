#include <stdio.h>

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int student, subject, total;
    float average;

    for (student = 0; student < 3; student++) {
        total = 0;
        for (subject = 0; subject < 3; subject++) {
            total += marks[student][subject];
        }

        average = total / 3.0;

        if (average >= 80)
            printf("%s Grade A avg = %.2f\n", names[student], average);
        else if (average >= 60)
            printf("%s Grade B avg = %.2f\n", names[student], average);
        else if (average >= 40)
            printf("%s Grade C avg = %.2f\n", names[student], average);
        else
            printf("%s Fail avg = %.2f\n", names[student], average);
    }

    int highestTotal = 0, topperIndex = 0;
    for (student = 0; student < 3; student++) {
        total = 0;
        for (subject = 0; subject < 3; subject++) {
            total += marks[student][subject];
        }

        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = student;
        }
    }

    printf("Topper: %s with total %d\n", names[topperIndex], highestTotal);

    return 0;
}
