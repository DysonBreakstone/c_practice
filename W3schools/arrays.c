#include <stdio.h>

int main() {
  // declaring
  int numberArray[] = {12, 23, 34, 45, 56};
  printf("Third element: %d\n", numberArray[2]);

  // updating element
  numberArray[2] = 1000;
  printf("Third element: %d\n", numberArray[2]);

  // looping
  int i;
  for (i = 0; i < 5; i++) {
    printf("Element %d: %d\n", i + 1, numberArray[i]);
  }

  // declare with size
  int myNumbers[4]; //Array with 4 elements
  myNumbers[0] = 1;
  myNumbers[1] = 2;
  myNumbers[2] = 3;
  myNumbers[3] = 4;
  // print size of array in bytes
  printf("Size of array in bytes: %lu\n", sizeof(myNumbers));

  // find length of array
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  printf("Number of elements: %d\n", length);

  // looping, but better
  for (i = 0; i < length; i++) {
    printf("Element %d: %d\n", i + 1, myNumbers[i]);
  }

  // two-dimensional arrays
  int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
  printf("The first element of the second array in this matrix is: %d\n", matrix[1][0]);
  // reassignment
  matrix[1][0] = 8;
  printf("After reassignment, the first element of the second array in this matrix is: %d\n", matrix[1][0]);

  // looping 
  int j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++ ) {
      printf("Element %d of array %d is equal to %d\n", j + 1, i + 1, matrix[i][j]);
    }
  }

  return 0;
}