/*WRITE A C PROGRAM TO CALCULATE AREA OF EQUILATERAL TRIANGLE*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the side of the equilateral triangle: ");
    scanf("%d",&a);
    int area = (a*a*1.73)/4;
    printf("The area of the equilateral triangle is %d",area);
    return 0;
}
