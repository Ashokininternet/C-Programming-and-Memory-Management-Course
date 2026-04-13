#include <stdio.h>
#include <stdlib.h>

typedef enum{
    FAILURE, SUCCESS, PENDING
}Status;

void connection( Status status){
    switch (status)
    {
    case 0:
        printf("Connection failed \n");
        break;
    case 1:
        printf("Connection success \n");
        break;
    default:
        printf("Connection pending \n");
        break;
    }
}

int main() {
    Status now = 0;
    connection(now);
    return 0;
}