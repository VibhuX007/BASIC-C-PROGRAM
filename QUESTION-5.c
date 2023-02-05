/*WRITE A C PROGRAM TO ENTER THE LENGTH AND BREADTH OF A RECTANGLE AND FIND ITS AREA*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d,%d,&a,&b");
    int area = a*b;
    printf("The area of the rectangle is %d",area);
    return 0;

}