/*WRITE A C PROGRAM TO P, R AND T AND CALCULATE COMPOUND INTEREST*/
#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the principal,rate and time: ");
    scanf("%d,%d,%d",&p,&r,&t);
    int ci = p*(1+r/100)^t;
    printf("The compound interest is %d",ci);
    return 0;
}
