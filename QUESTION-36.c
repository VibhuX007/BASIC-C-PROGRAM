/*WRITE A C PROGRAM TO CHECK IF THE ENTERED CHARACTER IS A ALPHABET OR NOT*/
#include<stdio.h>
int main()
{
char a;
printf("Enter the value of a");
scanf("%c",&a);
if(a>='a'&&a<='z'||a>='A'&&a<='Z')
{
printf("a is alphabet");
}
else
{
printf("a is not alphabet");
}
return 0;
}
