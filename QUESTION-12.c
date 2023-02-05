/*WRITE A C PROGRAM TO ENTER ANY NUMBER AND FIND ITS SQUARE ROOT*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    float square_root = sqrt(a);
    printf("The square root of the number is %f",square_root);
    return 0;
}