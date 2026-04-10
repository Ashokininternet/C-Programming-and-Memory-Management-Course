#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);    

    switch (grade)
    {
    case 'A':
        printf("You did great");
        break;
    case 'B':
        printf("You did well");
        break;
    case 'C':
        printf("You can do better");
        break;
    case 'D':
        printf("Try harder");
        break;
    case 'E':
        printf("Need Improvement");
        break;
    case 'F':
        printf("You fail");
        break;

    default: 
        printf("Invalid code");
        break;
    }


    return 0;
}