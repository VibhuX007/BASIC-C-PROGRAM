/*WRITE A C PROGRAM TO CHECK IF THE NUMBER IS POSITIVE, NEGATIVE OR ZERO*/
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
if(a>0)
{
printf("a is positive");
}
else if(a<0)
{
printf("a is negative");
}
else
{
printf("a is zero");
}
return 0;
}
