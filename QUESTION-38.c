/*WRITE A C PROGRAM TO ENTER ANY CHARACTER AND CHECK IF IT IS A ALPHABET, VOWEL OR SPECIAL CHARACTER*/
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
else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
printf("a is vowel");
}
else
{
printf("a is special character");
}
return 0;
}
