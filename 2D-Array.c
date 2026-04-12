#include <stdio.h>
#include <stdlib.h>

int main() {
    //The first "[]" is the length and the second "[]" is the width
    int array[6][3] = {
        {1,3,4},
        {48,8,5},
        {89, 5, 6},
        {4, 3, 2},
        {7, 8, 9},
        {6, 22, 30}
    };
    printf("%d", array[5][0]);
    return 0;
}