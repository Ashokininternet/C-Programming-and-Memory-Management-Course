#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[6][3] = {
        {1,3,4},
        {48,8,5},
        {89, 5, 6},
        {4, 3, 2},
        {7, 8, 9},
        {6, 22, 30}
    };
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d, ", array[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
