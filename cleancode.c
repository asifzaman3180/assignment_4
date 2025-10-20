#include <stdio.h>

#include <stdio.h>

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int i, j, sum;
    float avg;

    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum += marks[i][j];
        }
        avg = sum / 3.0;
        if(avg >= 80)
            printf("%s Grade A avg=%.2f\n", names[i], avg);
        else if(avg >= 60)
            printf("%s Grade B avg=%.2f\n", names[i], avg);
        else if(avg >= 40)
            printf("%s Grade C avg=%.2f\n", names[i], avg);
        else
            printf("%s Fail avg=%.2f\n", names[i], avg);
    }

    int maxTotal = 0, topperIndex = 0;
    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum += marks[i][j];
        }
        if(sum > maxTotal) {
            maxTotal = sum;
            topperIndex = i;
        }
    }

    printf("Topper: %s with total %d\n", names[topperIndex], maxTotal);
    return 0;
}