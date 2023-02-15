/*WRITE A C PROGRAM TO FIND THE MAXIMUM BETWEEN THREE NUMBERS USING CONDITIONAL OPERATORS*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a,b and c:");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c)?printf("a is greater"):((b>c)?printf("b is greater"):printf("c is greater"));
return 0;
}
