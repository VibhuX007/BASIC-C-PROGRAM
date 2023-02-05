/*WRITE A C PROGRAM TO PERFORM INPUT/OUTPUT OF ALL DATA TYPES*/
#include <stdio.h>

int main(void) {
  int a;
  float b;
  double c;
  char d;
  short e;
  long f;
  long long g;

  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("Enter a float: ");
  scanf("%f", &b);
  printf("Enter a double: ");
  scanf("%lf", &c);
  printf("Enter a character: ");
  scanf(" %c", &d);
  printf("Enter a short integer: ");
  scanf("%hd", &e);
  printf("Enter a long integer: ");
  scanf("%ld", &f);
  printf("Enter a long long integer: ");
  scanf("%lld", &g);

  printf("\nEntered values: \n");
  printf("Integer: %d\n", a);
  printf("Float: %f\n", b);
  printf("Double: %lf\n", c);
  printf("Character: %c\n", d);
  printf("Short Integer: %hd\n", e);
  printf("Long Integer: %ld\n", f);
  printf("Long Long Integer: %lld\n", g);

  return 0;
}
