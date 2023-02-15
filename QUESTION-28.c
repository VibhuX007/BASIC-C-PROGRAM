/*WRITE A C PROGRAM TO CHECK IF THE CHARACTER IS A ALPHABET OR NOT USING CONDITIONAL OPERATOR*/
#include<stdio.h>
int main()
{
char a;
printf("Enter the value of a:");
scanf("%c",&a);
(a>='a'&&a<='z'||a>='A'&&a<='Z')?printf("a is an alphabet"):printf("a is not an alphabet");
return 0;
}
