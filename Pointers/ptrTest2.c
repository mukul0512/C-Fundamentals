/*

-> Write a function to calculate the sum, product & average of 2 numbers.
    Print that average in the main function. 

*/

#include <stdio.h>

void calcSum(int n1, int n2);

void calcProduct(int num1, int num2);

void calcAverage(int numb1, int numb2);

int main()
{
    int sum, n1, n2;
    calcSum(n1, n2);
    calcProduct(n1, n2);
    calcAverage(n1, n2);
    return 0;
}

void calcSum(int n1, int n2){
    n1 = 2;
    n2 = 4;
    int sum = n1 + n2;
    printf("\nSum of n1 and n2 is : %d\n", sum);
}

void calcProduct(int num1, int num2){
    num1 = 2;
    num2 = 4;
    int product = num1 * num2;
    printf("\nProduct of num1 and num2 is : %d\n", product);
}

void calcAverage(int numb1, int numb2){
    numb1 = 2;
    numb2 = 4;
    int average = (numb1 + numb2) / 2;
    printf("\nAverage of numb1 and numb2 is : %d\n", average);
}