/*WRITE A C PROGRAM TO ENTER THE MARKS OF FIVE SUBJECTS AND CALCULATE THE TOTAL, AVERAGE AND PERCENTAGE*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of five subjects: ");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    int total = a+b+c+d+e;
    int average = total/5;
    int percentage = (total/500)*100;
    printf("The total marks is %d, the average is %d and the percentage is %d",total,average,percentage);
    return 0;
}