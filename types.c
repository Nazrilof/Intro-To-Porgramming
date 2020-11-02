#include <stdio.h>
#include <stdbool.h>

int main() {
  // Base types
  int count = 0;
  bool is_on = true;
  char favorite_letter = 'a';
  float decimal_number = 5.1111111;

  // Signed and unsigned
  signed int var01 = -255;
  unsigned int var02 = 500;

  // Short and long
  short int var03 = 100;
  long int var04 = 585860305;

  // Underflow
  int underflow_example = -2147483648;
  printf("Before:\t%i\n", underflow_example);
  printf("After:\t%i\n", underflow_example - 1);

  // Overflow
  int overflow_example = 2147483647;
  printf("Before:\t%i\n", overflow_example);
  printf("After:\t%i\n", overflow_example + 1);

  return 0;
}