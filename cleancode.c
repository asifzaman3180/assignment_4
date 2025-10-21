#include<stdio.h> 

//Function to calculate average
float average(int sum){
    return sum/3.0;
}

//Function to calculate grade based on average
void Grade_calculation(float avg, char name[]){
    if(avg>=80)
        printf("%s Grade A avg=%.2f\n",name,avg);
    else if(avg>=60)
        printf("%s Grade B avg=%.2f\n",name,avg);
    else if(avg>=40)
        printf("%s Grade C avg=%.2f\n",name,avg);
    else 
        printf("%s Fail avg=%.2f\n",name,avg);
}

int main(){
    int marks[3][3]={{50,60,70},{80,90,100},{30,40,50}};
    char names[3][10]={"Ali","Bob","Cat"};
    int student,subject,sum;
    float avg; 

    //Calculate average and grade for each student
    for(student=0;student<3;student++){
        sum=0;
        for(subject=0;subject<3;subject++){
            sum+=marks[student][subject];
        }
            avg=average(sum);
            Grade_calculation(avg,names[student]);
    }
        int max=0,pos=0;
    
        //Find the maximum scorer
        for(student=0;student<3;student++){
            sum=0;
             for(subject=0;subject<3;subject++){
                sum+=marks[student][subject];
            }
            if(sum>max){
                max=sum;pos=student;
            }
        }
        printf("Topper: %s with total %d\n",names[pos],max);
 return 0;
} 