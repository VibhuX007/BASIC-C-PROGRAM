/*WRITE A C PROGRAM TO CONVERT DAYS INTO YEARS, WEEKS AND DAYS*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number of days: ");
    scanf("%d",&a);
    int year = a/365;
    int week = (a%365)/7;
    int day = (a%365)%7;
    printf("The number of years is %d, weeks is %d and days is %d",year,week,day);
    return 0;
}