/*WRITE C PROGRAM TO CHECK IF THE ENTERED YEAR IS LEAP YEAR OR NOT*/
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
if(a%4==0)
{
printf("a is leap year");
}
else
{
printf("a is not leap year");
}
return 0;
}
