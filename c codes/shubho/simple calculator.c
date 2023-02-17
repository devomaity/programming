#include <stdio.h>
#include <conio.h>

int main()
{

  char op;
  double first, second;
  printf("Enter a operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op)
  {
  case '+':
    printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
    break;
  case '-':
    printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
    break;
  case '*':
    printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
    break;
  case '/':
    printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
    break;
  // operator doesn't match any case constant
  default:
    printf("Error! operator is not correct\n");
  }
  getch();
  return 0;
}
