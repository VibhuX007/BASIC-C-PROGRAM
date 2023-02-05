/*WRITE A C PROGRAM TO ENTER THE TEMPERATURE IN CELSIUS AND CONVERT IT INTO Fahrenheit*/
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&a);
    float fahrenheit = (a*9/5)+32;
    printf("The temperature in fahrenheit is %f",fahrenheit);
    return 0;
}