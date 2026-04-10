#include <stdio.h>
#include <stdlib.h>

int main() {
    int index = 0;
    while (index != 1)
    {
        printf("Enter another number: ");
        scanf("%d", &index);
        switch (index == 1)
        {
        case 1:
            printf("Ya you got it \n");
            break;
        
        default:
            printf("Wrong, try again\n");
            break;
        }
    }
    do {
        printf("Real index was 0 \n");
    }while (index == 0);

    return 0;
}