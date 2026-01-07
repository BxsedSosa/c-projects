#include <stdio.h>

struct Inputs {
  char operation;
  int number_one;
  int number_two;
};

int get_number_from_user(char pos[]) {
  int user_input;
  printf("Input %s number:\n>>> ", pos);
  scanf("%d", &user_input);
  return user_input;
}

char get_operation_from_user() {
  char user_input;
  printf("Input math operation\n1. +\n2. -\n3. *\n4 /\n>>> ");
  scanf("%c", &user_input);
  return user_input;
}

struct Inputs get_user_inputs() {
  struct Inputs user_inputs;
  user_inputs.operation = get_operation_from_user();
  user_inputs.number_one = get_number_from_user("first");
  user_inputs.number_two = get_number_from_user("second");

  return user_inputs;
}

int get_sum(int num1, int num2) { return num1 + num2; }
int get_diff(int num1, int num2) { return num1 - num2; }
int get_mult(int num1, int num2) { return num1 * num2; }
double get_div(int num1, int num2) { return (float)num1 / (float)num2; }

void show_result_int(int num1, int num2, int total, char operation) {
  printf("%d %c %d = %d\n", num1, operation, num2, total);
}

void show_result_float(int num1, int num2, double total, char operation) {
  printf("%d %c %d = %.2f\n", num1, operation, num2, total);
}

void result_filter(struct Inputs user_inputs) {
  char operation = user_inputs.operation;
  int num1 = user_inputs.number_one;
  int num2 = user_inputs.number_two;

  switch (operation) {
  case '+':
    show_result_int(num1, num2, get_sum(num1, num2), operation);
    break;
  case '-':
    show_result_int(num1, num2, get_diff(num1, num2), operation);
    break;
  case '*':
    show_result_int(num1, num2, get_mult(num1, num2), operation);
    break;
  case '/':
    show_result_float(num1, num2, get_div(num1, num2), operation);
    break;
  }
}

int main() {
  struct Inputs inputs = get_user_inputs();
  result_filter(inputs);
  return 0;
}
