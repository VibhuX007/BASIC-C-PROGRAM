/*WRITE A C PROGRAM TO ENTER TWO ANGLES AND FIND THE THIRD ANGLE*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two angles: ");
    scanf("%d,%d",&a,&b);
    int c = 180-(a+b);
    printf("The third angle is %d",c);
    return 0;
}