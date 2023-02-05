/*WRITE A C PROGRAM TO ENTER THE TEMPERATURE IN FAHRENHEIT AND CONVERT IT INTO CELSIUS*/
#include<stdio.h>  
int main()   
{ float Fahrenheit, Celsius;
    printf("Enter the temperature in Fahrenheit : ");  
        scanf("%f",&Fahrenheit);  
            Celsius = ((Fahrenheit-32)*5)/9;  
                printf("\n\n Temperature in Celsius is : %f",Celsius);  
                    return (0);
}