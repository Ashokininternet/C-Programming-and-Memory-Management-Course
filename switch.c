#include <stdio.h>
#include <stdlib.h>

int main() {
  char grade;
  printf("Enter your grade: ");
  scanf("%c", &grade);

  switch (grade) {
  case 'A':
    printf("You did great\n");
    break;
  case 'B':
    printf("You did well\n");
    break;
  case 'C':
    printf("You can do better\n");
    break;
  case 'D':
    printf("Try harder\n");
    break;
  case 'E':
    printf("Need Improvement\n");
    break;
  case 'F':
    printf("You fail\n");
    break;

  default:
    printf("Invalid code \n");
    break;
  }

  return 0;
}
