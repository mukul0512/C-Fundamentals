/*
-> Write a function to calculate the sum, product & average of 2 numbers.
    Print that average in the main function.
*/

#include <stdio.h>

void calcSPA(int a, int b, int *sum, int *product, int *average);

int main()
{
    int a, b;
    printf("\nEnter the value of a:\n");
    scanf("%d", &a);

    printf("\nEnter the value of b:\n");
    scanf("%d", &b);

    int sum, product, average;

    calcSPA(a, b, &sum, &product, &average);

    printf("\nThe sum of a and b is %d\n", sum);

    printf("\nThe product of a and b is %d\n", product);

    printf("\nThe average of a and b is %d\n", average);
    return 0;
}

void calcSPA(int a, int b, int *sum, int *product, int *average)
{
    *sum = a + b;
    *product = a * b;
    *average = (a + b) / 2;
}