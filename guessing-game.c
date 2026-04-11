#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5;
    int guess;
    int guessCount = 0;
    while (guess != num && guessCount < 3)
    {
        printf("Enter your guesse: ");
        scanf("%d", &guess);
        guessCount++;
        printf("You have guessed %d times \n", guessCount);
        switch (guess)
        {
        case 5:
            printf("Ya you guessed it \n");
            break;
        default:
            printf("Wrong \n");
            break;
        }
        switch (guessCount)
        {
        case 3:
        printf("Reached max guesses \n");
            break;
        
        default:
            break;
        }
    }
    

    return 0;
}