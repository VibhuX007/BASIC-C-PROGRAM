/*WRITE A C PROGRAM TO ENTER THE RADIUS OF CIRCLE AND FIND ITS AREA, CIRCUMFERENCE, AND DIAMETER*/
#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d,&r");
    float area = 3.14*r*r;
    float circumference = 2*3.14*r;
    float diameter =2*r;
    printf("The area of the circle is %f",area);
    printf("The circumference of the circle is %f",circumference);
    printf("The diameter of the circle is %f",diameter);
    return 0;

}
