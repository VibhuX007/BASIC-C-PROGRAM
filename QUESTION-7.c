/*WRITE A C PROGRAM TO ENTER THE LENGTH IN CENTIMETER AND CONVERT IT INTO METER AND KILOMETER*/
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the length in centimeter: ");
    scanf("%f",&a);
    float meter = a/100;
    float kilometer = a/100000;
    printf("The length in meter is %f and in kilometer is %f",meter,kilometer);
    return 0;
}