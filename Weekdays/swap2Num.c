/*
Enter first number:
21
Enter second number:
32

Original numbers: num1 = 21, num2 = 32

After swap by value: num1 = 21, num2 = 32

After swap by reference: num1 = 32, num2 = 21

*/

#include <stdio.h>

void swapByValue(int num1, int num2);
void swapByReference(int *num1, int *num2);

int main()
{
    int num1, num2;
    printf("\nEnter first no\n");
    scanf("%d", &num1);

    printf("\nEnter second no\n");
    scanf("%d", &num2);

    printf("\nThe original no are : num1 = %d and num2 = %d\n", num1, num2);

    swapByValue(num1, num2);

    printf("\nAfter swap by value: num1 = %d and num2 = %d\n", num1, num2);

    swapByReference(&num1, &num2);

    printf("\nAfter swap by reference: num1 = %d and num2 = %d\n", num1, num2);

    return 0;
}

void swapByValue(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void swapByReference(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}