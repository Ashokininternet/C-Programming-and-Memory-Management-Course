#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 4;
    double y = 5.4;
    char z = 'Z';
// Always add '&' when printing memmory add
    printf("y = %p \n", &y);
    printf("x = %p \n", &x);
    printf("z = %p \n", &z);

    return 0;
}