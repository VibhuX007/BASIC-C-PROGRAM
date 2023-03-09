/*WRITE A C PROGRAM TO CHECK IF THE NUMBER IS DIVISIBLE BY 5 AND 11 OR NOT*/
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a");
scanf("%d",&a);
if(a%5==0&&a%11==0)
{
printf("a is divisible by 5 and 11");
}
else
{
printf("a is not divisible by 5 and 11");
}
return 0;
}
