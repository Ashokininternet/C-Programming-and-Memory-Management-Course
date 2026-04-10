#include <stdio.h>
#include <stdlib.h>
// the "||" is the "or" operator in C
// "!(condition)" the "!" is the negate operator and it will give false if the conition is true and like that the opposite too
double max(double num1, double num2, double num3)
{
    double ans;
    if (num1 > num2 && num1 > num3)
    {
        ans = num1;
    }
    else if (num2 > num3 && num2 > num1)
    {
        ans = num2;
    }
    else {
        ans = num3;
    }

    return ans;
}

int main()
{
    double num1;
    double num2;
    double num3;

    printf("Enter first num: ");
    scanf("%lf", &num1);
    printf("Enter second num: ");
    scanf("%lf", &num2);
    printf("Enter third num: ");
    scanf("%lf", &num3);

    printf("%f is the biggest", max(num1, num2, num3));

    return 0;
}