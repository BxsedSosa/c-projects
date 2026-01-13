#include <stdio.h>

void display_fah_to_cel() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf(" F   |  C\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

void display_cel_to_fah() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("  C   | F\n");
  while (celsius <= upper) {
    fahr = (celsius * 1.8) + 32;
    printf("%6.0f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

int main() {
  display_fah_to_cel();
  display_cel_to_fah();
  return 0;
}
