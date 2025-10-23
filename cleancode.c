#include<stdio.h>
#define Student 3
#define Subject 3

//Function to calculate total marks of the students
int calculateTotal(int marks[Subject]){
    int total = 0;
    for(int i = 0;i < Subject;i++){
        total += marks[i];
    }
    return total;
}

//Function to calculate average
float calculateAverage(int marks[Subject]){
    int total = calculateTotal(marks);
    return total/(float)Subject;
}

//Function to print grade based on average
void printGrade(char *name, float average){
    if(average >= 80){
        printf("%s:Grade A (avg = %2f)\n",name ,average);
    }
    else if(average >= 60){
        printf("%s:Grade B (avg = %2f)\n",name ,average);
    }
    else if(average >= 40){
        printf("%s:Grade C (avg = %2f)\n",name ,average);
    }
    else{
        printf("%s:Fail (avg = %2f)\n",name ,average);
    }
}

int main(){
    //Student names
    char names[Student][10] = {"Ali","Bob","Cal"};

    //Marks of each students in 3 subjects
    int marks[Student][Subject] = {
        {50,60,70},
        {80,90,100},
        {30,40,50}
    };

    int highestTotal = 0;
    int topperIndex = 0;

    //Process of each student's marks
    for(int i = 0;i < Student;i++){
        int total = calculateTotal(marks[i]);
        float average = calculateAverage(marks[i]);

        printGrade(names[i],average);

        if(total > highestTotal){
            highestTotal = total;
            topperIndex = i;
        }
    }
    printf("\nTopper: %s with total marks = %d\n",names[topperIndex],highestTotal);
}