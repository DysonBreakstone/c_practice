#include <stdio.h>

int main() {
  // myNum will always be 15; an attempt to change it will result in an error.
  const int myNum = 15;
  //myNum = 12;

  // Constants must be declared with a value

  //Conventional to put constants into ALL_CAPS_SNAKE_CASE

  const int BIRTH_YEAR = 1989;

  return 0;
}