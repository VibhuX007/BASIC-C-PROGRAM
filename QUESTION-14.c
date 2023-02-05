/*WRITE A C PROGRAM TO ENTER THE BASE AND HEIGHT OF TRIANGLE AND FIND ITS AREA*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the base and height of the triangle: ");
    scanf("%d,%d",&a,&b);
    int area = (a*b)/2;
    printf("The area of the triangle is %d",area);
    return 0;
}