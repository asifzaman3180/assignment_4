#include <stdio.h>

//Function to calculate the average marks of the students
float calculateAverage(int marks[], int subjectCount) {
    int total = 0;
    for (int i = 0; i < subjectCount; i++) {
        total += marks[i];
    }
    return total / (float)subjectCount;
}

//Function to get the grade of the srudents
char getGrade(float averageMarks) {
    if (averageMarks >= 80)
        return 'A';
    else if (averageMarks >= 60)
        return 'B';
    else if (averageMarks >= 40)
        return 'C';
    else
        return 'F';
}

int main() {
    //Name and marks of the students
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char studentNames[3][10] = {"Ali", "Bob", "Cat"};

    int studentIndex, subjectIndex;
    float averageMarks;

    printf("        STUDENT REPORT CARD SYSTEM       \n");
    printf("-----------------------------------------\n");
    printf("%-10s %-10s %-10s\n", "Name", "Average", "Grade");
    printf("-----------------------------------------\n");


    //Loop through each student
    for (studentIndex = 0; studentIndex < 3; studentIndex++) {
        //Calculate average and grade
        averageMarks = calculateAverage(marks[studentIndex], 3);
        char grade = getGrade(averageMarks);

        //Print eacjh of the student's name, grade and average
       printf("%-10s %-10.2f %-10c\n", studentNames[studentIndex], averageMarks, grade);
    }

    //To Find the student with highest marks
    int highestTotal = 0;
    int topperIndex = 0;

    for (studentIndex = 0; studentIndex < 3; studentIndex++) {
        int totalMarks = 0;
        for (subjectIndex = 0; subjectIndex < 3; subjectIndex++) {
            totalMarks += marks[studentIndex][subjectIndex];
        }

        if (totalMarks > highestTotal) {
            highestTotal = totalMarks;
            topperIndex = studentIndex;
        }
    }

    printf("-----------------------------------------\n");
    printf("Topper: %s with total %d\n", studentNames[topperIndex], highestTotal);
    printf("-----------------------------------------\n");

    return 0;
}
