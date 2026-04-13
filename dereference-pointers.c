#include <stdio.h>
#include <stdlib.h>

int main() {
    int z = 4;
    int *pZ = &z;
    printf("z = %p \n", &z);
    printf("pZ = %d \n", *pZ);

    return 0;
}