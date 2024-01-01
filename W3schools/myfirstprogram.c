#include <stdio.h>

/*
To run program in terminal, run the following commands:

1. gcc myfirstprogram.c -o myfirstprogram
2. ./myfirstprogram (or whatever filepath)

gcc is the compiler

TO OBSERVE THE RETURN VALUE (exit status) OF A PROGRAM:

echo $?

echo is a linux/macOS command which prints text or variable values
$ is a special character in Unix-like shells to indicate variable substitution. It will be followed by the name of a variable and the shell replaces it with the value of the variable.
? is a special character in Unix-like shells which represents the exit status of the last executed command. 


UNEXPECTED '%' IN TERMINAL OUTPUT
  This is a zsh thing, it will output a '%' to show that you have not included a line break at the end of your printf().
*/

int main() {
  printf("Hello World!\n");
  printf("This is a new line and it's great.\n\n");
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