#include <stdio.h>
#include <stdlib.h>

double doCalc( double num1, double num2, int select){
    double ans;
    if (select == 1)
    {
        ans = num1 + num2;
        return ans;
    }else if (select == 2)
    {
        ans = num1 - num2;
        return ans;
    }else if (select == 3)
    {
        ans = num1 * num2;
        return ans;
    }else if (select == 4)
    {
        if (num2 == 0)
        {
            printf("Division by 0 error");
            exit(1);
        }
        else {
            ans = num1 / num2;
            return ans;
        }
    }else{
        printf("Invalid operation \n");
        exit(1);
    }
    return ans;
}

int main() {
    int select;
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("\n 1)Add\n 2)Subtract\n 3)Multiply\n 4)Divide \nSelect your operation: ");
    scanf("%d", &select);
    printf("Enter second number: ");
    scanf("%lf", &num2);


    printf("Answer is: %f \n", doCalc(num1, num2, select));


    return 0;
}