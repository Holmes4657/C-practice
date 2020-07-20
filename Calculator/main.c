#include <stdio.h>

int main() {

  double first_number;
  double second_number;
  char operation;
  double result;

  scanf("%lf", &first_number);
  scanf(" %c", &operation);
  scanf("%lf", &second_number);

  switch(operation) {
    case '+':
      result = first_number + second_number;
    break;
    
    case '-':
      result = first_number - second_number;
    break;

    case '/':
      result = first_number / second_number;
    break;

    case '*':
      result = first_number * second_number;
    break;
  }

  printf("\nResult is: %0.2lf\n", result);
  
  return 0;
}