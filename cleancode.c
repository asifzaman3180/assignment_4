#include <stdio.h>

float calculateAverage(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += marks[i];
    return sum / (float)n;
}

char getGrade(float avg) {
    if(avg >= 80) return 'A';
    else if(avg >= 60) return 'B';
    else if(avg >= 40) return 'C';
    else return 'F';
}

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int maxTotal = 0, topperIndex = 0;

    for(int i = 0; i < 3; i++) {
        float avg = calculateAverage(marks[i], 3);
        char grade = getGrade(avg);
        printf("%s Grade %c avg=%.2f\n", names[i], grade, avg);

        int total = (int)(avg * 3);
        if(total > maxTotal) {
            maxTotal = total;
            topperIndex = i;
        }
    }

    printf("Topper: %s with total %d\n", names[topperIndex], maxTotal);
    return 0;
}