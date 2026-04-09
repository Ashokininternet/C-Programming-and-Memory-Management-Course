#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double ans = num * num * num;
    return ans;
}

int main() {
    double num;

    printf("Enter the number to be cubed: ");
    scanf("%lf", &num);

    printf("%f", cube(num));

    return 0;
}