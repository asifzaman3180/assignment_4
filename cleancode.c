#include <stdio.h>

int main()
{
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    
    char studentNames[3][10] = {"Ali", "Bob", "Cat"};
    
    int studentIndex, subjectIndex;
    int totalMarks;
    float averageMarks;
    
    // Calculate average and grade for each student
    for (studentIndex = 0; studentIndex < 3; studentIndex++)
    {
        totalMarks = 0;
        for (subjectIndex = 0; subjectIndex < 3; subjectIndex++)
        {
            totalMarks += marks[studentIndex][subjectIndex];
        }
        
        averageMarks = totalMarks / 3.0;
        
        if (averageMarks >= 80)
            printf("%s: Grade A, Average = %.2f\n", studentNames[studentIndex], averageMarks);
        else if (averageMarks >= 60)
            printf("%s: Grade B, Average = %.2f\n", studentNames[studentIndex], averageMarks);
        else if (averageMarks >= 40)
            printf("%s: Grade C, Average = %.2f\n", studentNames[studentIndex], averageMarks);
        else
            printf("%s: Fail, Average = %.2f\n", studentNames[studentIndex], averageMarks);
    }

    // Find the topper (highest total marks)
    int highestTotal = 0;
    int topperIndex = 0;

    for (studentIndex = 0; studentIndex < 3; studentIndex++)
    {
        totalMarks = 0;
        for (subjectIndex = 0; subjectIndex < 3; subjectIndex++)
        {
            totalMarks += marks[studentIndex][subjectIndex];  // fixed 'a' → 'marks'
        }
        if (totalMarks > highestTotal)
        {
            highestTotal = totalMarks;
            topperIndex = studentIndex;
        }
    }

    printf("\nTopper: %s with total marks = %d\n", studentNames[topperIndex], highestTotal);
    
    return 0;
}
