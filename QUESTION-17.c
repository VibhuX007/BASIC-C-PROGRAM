/*WRITE A C PROGRAM TO ENTER P,R,AND T AND CALCULATE SIMPLE INTEREST*/
#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the principal,rate and time: ");
    scanf("%d,%d,%d",&p,&r,&t);
    int si = (p*r*t)/100;
    printf("The simple interest is %d",si);
    return 0;
}
