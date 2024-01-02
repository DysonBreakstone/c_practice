#include <stdio.h>

int main() {
  int i;

  /*
    Three statements: 
      1. exectuted once before execution of block
      2. defines condition for executing the code block
      3. executed each time the code block has been run
  */
 
  for (i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  return 0;
}