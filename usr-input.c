#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    printf("Enter name:");
    // use "&varuable_name" for int
    // fgets gets the whole line 
    //stdin = standard input 
    fgets(name, 20, stdin);
    printf("Hello %s", name);

    return 0;
}