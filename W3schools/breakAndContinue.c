#include <stdio.h>

/*
  break; statement will jump out of a switch or a loop
  continue; will skip this iteration and move onto the next one
*/

int main() {
  int i;
  for (i = 0; i < 10; i++) {
    if (i % 3 == 0) {
      continue;
    }
    printf("%d is not divisible by 3. If it were, it would not be printed out.\n", i);
  }

  int j;
  for (j = 0; j < 10; j++) {
    if (j > 6) {
      printf("Well, you've finally reached 7. I hope it's everything you wanted.\n");
      break;
    }
    printf("Not yet! You're only at %d\n", j);
  }
}