/*WRITE A C PROGRAM TO PRINT TWO NUMBERS AND PERFORM ALL ARITHMETIC OPERATIONS*/
#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  
  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  float quotient = (float) a / b;
  int modulo = a % b;
  
  printf("\nSum of %d and %d is: %d\n", a, b, sum);
  printf("Difference of %d and %d is: %d\n", a, b, difference);
  printf("Product of %d and %d is: %d\n", a, b, product);
  printf("Quotient of %d and %d is: %.2f\n", a, b, quotient);
  printf("Modulo of %d and %d is: %d\n", a, b, modulo);
  
  return 0;
}
