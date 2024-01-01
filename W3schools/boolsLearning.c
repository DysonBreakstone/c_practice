#include <stdio.h>

// Need to import the following header; bools are not part of standard library.
#include <stdbool.h>

int main() {
  /*
    bools will return an integer value of 0 or 1, therefore you need an 
    integer format specifier (%d or %i) to print the value.
  */
  bool batonCookiesAreTasty = true;
  bool batonCookiesAreGross = false;

  printf("%d\n", batonCookiesAreTasty);
  printf("%d\n", batonCookiesAreGross);

  /*
    comparison operators are the same way, they'll return either a 0 or 1
    for false or true.
  */
  printf("%d\n", 10 < 9);
  printf("%d\n", 10 > 9);
  printf("%d\n", 1 == 2);
  printf("%d\n", 2 == 2);

  // Can you convert the data stored at a certain address into whatever format specifier you'd like?
  char seriesOfBits = 'C';
  printf("%d\n", seriesOfBits);
  /*
    No, no you can't. Characters do have ASCII values which will be automatically applied when you
    implicitly convert them (integral promotion) but you cannot convert a character into a string.
    
  */ 

  return 0;
}