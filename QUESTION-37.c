/*WRITE A C PROGRAM TO ENTER ANY ALPHABET AND CHECK WHETHER IT IS A VOWEL OR NOT*/
#include<stdio.h>
int main()
{
char a;
printf("Enter the value of a");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("a is vowel");
}
else
{
printf("a is not vowel");
}
return 0;
}
