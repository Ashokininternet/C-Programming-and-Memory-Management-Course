#include <stdio.h>
#include <stdlib.h>
// void does not retutn any data in C
void funHi(char *val, int age){
    printf("Hello %s you are %d", val, age);
}

int main() {
    char name[20];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    funHi(name, age);
    return 0;
}
