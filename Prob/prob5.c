#include <stdio.h>

int main()
{
    float n1, n2, res;
    char operator;
    printf("Enter an operator: \n");
    scanf("%c", &operator);

    printf("Enter n1: \n");
    scanf("%f", &n1);

    printf("Enter n2: \n");
    scanf("%f", &n2);

    switch (operator)
    {
    case '+':
        res = n1 + n2;
        break;
    case '-':
        res = n1 - n2;
        break;
    case '*':
        res = n1 * n2;
        break;
    case '/':
        res = n1 / n2;
        break;
    
    default:
        printf("Invalid Operator");
        return 1;
    }
    printf("Result is : %.2f\n", res);
    return 0;
}