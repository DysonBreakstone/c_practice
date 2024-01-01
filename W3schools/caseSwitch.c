#include <stdio.h>
#include <time.h>

int main() {
  int userInput;
  printf("Enter a number between 1 and 5. And don't enter something that's not a number, this program is not sophisticated.\n");
  scanf("%d", &userInput);
  
  switch (userInput) {
    case 1:
      printf("You entered 1. The first number that came into your head. Real creative.\n");
      break;
    case 2:
      printf("You entered 2. Pretty co-dependent of you.\n");
      break;
    case 3:
      printf("You entered 3. Middle of the pack. Just like you.\n");
      break;
    case 4:
      printf("You entered 4. A nice square number from a total square.\n");
      break;
    case 5:
      printf("You entered 5. Great choice!\n");
      break;
    default:
      printf("Well clearly you're not great at following directions.\n");
  }

  return 0;
}