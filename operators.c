#include <stdio.h>

int main() {
  int add = 5 + 6; // 11
  int subtract = 7 - 3; // 4
  int multiply = 5 * 2; // 10
  int divide = 40 / 2; // 20
  int mod = 40 % 3; // 1 

  // Casting
  int truncate = (int) 50.5;
  printf("%i\n", truncate);

  char h[] = { (char)(130/2) };
  puts(h);

  // Truncation
  int truncated = 10 / 3; // 3

  float fix = (float) 10 / 3;
}