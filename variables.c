#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[81];
    int age = 10;
    printf("Pls enter your Name: ");
    scanf("%s", name);
    printf("Hello i am %s \n", name);
    age = 20;
    printf("My age is %d \n", age);

}