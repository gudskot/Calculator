#include <stdio.h>

int main()
{
    float num1, num2, res;
    char sign, quit;

    printf("Hi, it`s terminal Calculator\n");
    while(quit != 'Q')
    {
        printf("Enter your first number: ");
        scanf("%f", &num1);
        printf("Enter your second number: ");
        scanf("%f", &num2);

        scanf("%c", &sign);      //For unnecessary enter

        printf("Choose the equation operation: + - * /\n");
        scanf("%c", &sign);

        switch(sign)
        {
            case '+':
                res = num1 + num2;
                break;
            case '-':
                res = num1 - num2;
                break;
            case '*':
                res = num1 * num2;
                break;
            case '/':
                res = num1 / num2;
                break;
        }
        printf("Result: %.2f\n", res);
        printf("Continue -> Enter\nLeave -> Q\n");

        scanf("%c", &quit);        //For unnecessary enter

        scanf("%c", &quit);
    }

    return 0;
}