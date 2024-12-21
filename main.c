#include <stdio.h>

int main()
{
    float num1, num2, res;
    char sign;

    printf("Hi, it`s terminal Calculator\n");
    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);

    scanf("%c", &sign);     //For unnecessary enter

    printf("Choose the equation operation: + - * /\n");
    scanf("%c", &sign);

    if(sign == '+') res = num1 + num2;
    else if(sign == '-') res = num1 - num2;
    else if(sign == '*') res = num1 * num2;
    else if(sign == '/') res = num1 / num2;

    printf("Result: %.2f\n", res);

    return 0;
}