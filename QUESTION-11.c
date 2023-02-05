/*WRITE A C PROGRAM TO FIND THE POWER OF A NUMBER X^Y*/
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d,%d",&x,&y);
    int power = x^y;
    printf("The power of the number is %d",power);
    return 0;
}