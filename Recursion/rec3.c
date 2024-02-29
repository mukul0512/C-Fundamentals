/*
-> Factorial of n ?

f(n!) = f(n-1!) * f(n!)

*/

#include <stdio.h>

float factorial(float num);

int main()
{
    float n;
    printf("\nEnter the value of n :\n");
    scanf("%f", &n);
    printf("\nFactorial of n is : \n%.2f", factorial(n));
    return 0;
}

float factorial(float num){
    if (num == 0)
    {
        return 1;
    }
    
    float factorialOfNm1 = factorial(num - 1);
    float factorialOfN = factorialOfNm1 * num;
    return factorialOfN;
}