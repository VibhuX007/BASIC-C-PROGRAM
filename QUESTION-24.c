/*WRITE A C PROGRAM TO FIND THE MAXIMUM BETWEEN TWO NUMBERS USING CONDITIONAL OPERATOR*/
#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a and b:");
scanf("%d%d",&a,&b);
(a>b)?printf("a is greater"):printf("b is greater");
return 0;
}
