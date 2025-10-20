#include<stdio.h>
void average(); //function decleration
void grade(); //function decleration
int main()
{
    void average();  //function call
    void grade();  //function call
    return 0;
}
void average()  //function definition
{
    int mark[3][3]={{50,60,70},{80,90,100},{30,40,50}}; //naming variables
    char name[3][10]={"Ali","Bob","Cat"}; //naming variables
    int i,j,sum; //naming variables
    float avg;
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=mark[i][j];
        }
        avg=sum/3.0;
        if(avg>=80){
            printf("%s Grade A avg=%.2f\n",name[i],avg);
        }
        else if(avg>=60){
            printf("%s Grade B avg=%.2f\n",name[i],avg);
        }
        else if(avg>=40){
            printf("%s Grade C avg=%.2f\n",name[i],avg);
        } 
        else{
            printf("%s Fail avg=%.2f\n",name[i],avg);
        }
    }
}
void grade()  //function definition
{
    int mark[3][3]={{50,60,70},{80,90,100},{30,40,50}}; //naming variables
    char name[3][10]={"Ali","Bob","Cat"}; //naming variables
    int i, j, max=0,pos=0, sum=0; //naming variables
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++){
            sum+=mark[i][j];
        }
        if(sum>max){
            max=sum;
            pos=i;
        }
    }
    printf("Topper: %s with total %d\n",name[pos],max); //show the final result
}