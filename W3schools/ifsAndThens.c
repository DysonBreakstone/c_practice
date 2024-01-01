#include <stdio.h>

int main() {
  int helen = 20;
  int mean = 40;

  if (helen == mean) {
    printf("Helen is mean.\n");
  } else if (helen > mean) {
    printf("Helen is more than mean.\n");
  } else {
    printf("Helen is less than mean.\n");
  }

  // Ternary operator

  (20 > 18) ? printf("20 is more than 18\n") : printf("20 is not more than 18\n");

  return 0;
}