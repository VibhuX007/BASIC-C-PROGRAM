/*WRITE A C PROGRAM TO ENTER LENGTH AND BREADTH OF A RECTANGLE AND FIND ITS PERIMETER*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d%d",&a,&b);
    int perimeter=2*(a+b);
    printf("The perimeter of the rectangle is %d",perimeter);
    return 0;

}
