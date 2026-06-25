#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc, char **argv){
    int i = 5;
    pid_t child = fork();
    switch (child)
    {
    case -1:
        printf("Error during forking\n");
        break;
    case 0:
        i = 7;
        printf("Child: %d, i = %d\n", child, i);
        break;
    default:
        printf("Parent: %d, i = %d\n", child, i);
        break;
    }

}
