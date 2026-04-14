#include <stdio.h>

void fun (int* pZ){
  (*pZ)++;
}

int main() {
    int z = 4;
    int *pZ = &z;
    printf("z = %p \n", &z);
    printf("pZ = %p \n", pZ);
    fun(pZ);
    printf("%d", z);
    return 0;
}
