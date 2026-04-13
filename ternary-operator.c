#include <stdio.h>
#include <stdlib.h>

int main() {
    int c = 4;
    int d = 5;
    int ter = ( c > d) ? c : d;

    printf("%d \n", ter);

    int num = 45;
    printf("%d is %s \n", num, (num % 2 == 0) ? "Even" : "Odd"); 

    return 0;
}