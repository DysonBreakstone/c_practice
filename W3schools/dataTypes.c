#include <stdio.h>
  /* 
    ints: %d or %i
    long long (large integer): %lld
    float: %f or %F
    double: %lf
    char: %c
    string: %s
  */ 

int main() {
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
  
  return 0;
}