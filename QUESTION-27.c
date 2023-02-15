/*WRITE A C PROGRAM TO CHECK IF THE GIVEN YEAR IS A LEAP YEAR OR NOT USING CONDITIONAL OPERATORS*/
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a:");
scanf("%d",&a);
(a%4==0)?printf("a is a leap year"):printf("a is not a leap year");
return 0;
}
