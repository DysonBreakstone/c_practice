#include <stdio.h>

/*
To run program in terminal, run the following commands:

1. gcc myfirstprogram.c -o myfirstprogram
2. ./myfirstprogram (or whatever filepath)

gcc is the compiler

*/

int main() {
  printf("Goodbye World!\n");
  printf("This is a new line and I love it\n\n");
  int myNum = 15;
  printf("My favorite number is %i\n\n", myNum);
  char firstInitial = 'D';
  char lastInitial = 'B';
  printf("My first name starts with %c and my last name starts with %c", firstInitial, lastInitial);

  int x = 5, y = 6, z = 7;
  int a, b, c;
  a = b = c = 50;
  printf("The sums of the two sets of variables are %d and %d", x + y + z, a + b + c);
  return 0;
}