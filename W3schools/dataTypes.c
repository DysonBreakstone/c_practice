#include <stdio.h>
  /* 
    FORMAT SPECIFIERS
    ints: %d or %i
    long long (large integer): %lld
    unsigned long (large positive integer): %lu
    float: %f or %F
    double: %lf
    char: %c
    string: %s
  */ 

int main() {

  // This is how to recieve terminal input, and also how to create large integers

  /*
  long long scannedInteger;
  printf("Enter a large number: ");
  scanf("%lld", &scannedInteger);
  printf("You entered %lld", scannedInteger);
  */
  
  float floatNum = 2.9;
  printf("One decimal place: %.1f \n", floatNum);
  printf("Two decimal places: %.2f \n", floatNum);
  printf("Three decimal places: %.3f \n", floatNum);
  printf("Four decimal places: %.4f \n", floatNum);
  printf("Five decimal places: %.5f \n", floatNum);
  
  // Explicit conversion of ints into float:
  float sumOne = (float) 5 / 2;

  int numOne = 6;
  int numTwo = 5;
  float sumTwo = (float) numOne / numTwo;

  printf("This should be a float: %f", sumTwo);

  // Find size of data type or variable
  // %lu is 'unsigned long', a data type which can store large positive integers.
  // 'unsigned' as in, no sign. Like, a negative sign. 

  int integerSize;
  int floatSize;
  double myDouble;
  char myChar;
  long long longInteger;

  printf("Integer size: %lu\n", sizeof(integerSize));
  printf("Float size: %lu\n", sizeof(floatSize));
  printf("Double size: %lu\n", sizeof(myDouble));
  printf("Char size: %lu\n", sizeof(myChar));
  printf("Long size: %lu\n", sizeof(longInteger));
  
  return 0;
}