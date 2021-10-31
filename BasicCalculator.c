#include <stdio.h>
int main() {
  char a;
  double first, second;
  printf("Enter any one operator (+, -, *, /): ");
  scanf("%c", &a);
  printf("Enter any two operands to perform desired calculation: ");
  scanf("%lf %lf", &first, &second);

  switch (a) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }
  return 0;
}
