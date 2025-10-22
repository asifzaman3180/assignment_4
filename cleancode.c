#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 3

//function declarations

float calculateAverage(int marks[]);
char calculateGrade(float avg);
void displayResult(char names[],int marks[]);
void findTopper(char names[][10],int marks[STUDENTS][SUBJECTS]);

//main function

int main(){
    int marks[STUDENTS][SUBJECTS]={
          {50,60,70};
          {80,90,100};
          {30,40,50};
     };

     char names[STUDENTS][10]={"Ali","Bob","Cat"};
          
    //display each student's result

    for(int i=0;i<STUDENTS;i++){
         displayResult(names[i],marks[i]);
    }

    //find topper

    findTopper(names, marks);
 
    return 0;   
}

//function to calculate average marks

float calculateAverage(int marks[]){
       int sum=0;
      for(int i=0;i<STUDENTS;i++){
           sum+=marks[i];
      }
      return sum/(float)SUBJECTS;
}

//function to determine grade based on average

char calculateGrade(float avg){

      if(avg>=80){
           return 'A';
      }else if(avg>=60){
           return 'B';
      }else if(avg>=40){
            return 'C';
      }else{
          return 'F';
      }
}

//function to display individual student's result

void displayResult(char names[],int marks[]){
       float avg=calculateAverage(marks);
       char grade=calculateGrade(avg);
       
       if(grade=='F'){
            printf("%s: Fail | Average = %.2f\n",name,avg);
       }else{
            printf("%s: Grade %c | Average = %.2f\n",name,grade,avg);
       }
       
}

//function to find and display the topper

void findTopper(char names[][10],int marks[STUDENTS][SUBJECTS]){
         int maxTotal=0,topperIndex=0;

         for(int i=0;i<STUDENTS;i++){
             int total=0;
             for(int j=0;i<SUBJECTS;j++){
                 total+=marks[i][j];
             }
             if(total>maxTotal){
                  maxTotal=total;
                  topperIndex=i;
             }
         }


       printf("\nTopper: %s with total marks = %d\n",names[topperIndex],maxTotal);
}