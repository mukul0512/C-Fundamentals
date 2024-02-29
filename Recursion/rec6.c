/*

-> Write a function to print n terms of the fibonacci sequence

-> Also can be done with the help of loop/iteration

ex -  0       1      1       2      5      8       13      21 ..... ....   (n-1) + (n-2)
      1st    2nd    3rd    4th    5th     6th    7th     8th  .........    nth
fib(n) = fib(n - 1) + fib(n - 2);

*/


#include <stdio.h>

float fibonacci(float n);

int main()
{
    printf("\n%.2f\n", fibonacci(6));
    return 0;
}

float fibonacci(float n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1; 
    }
    float fibonacciNm1 = fibonacci(n - 1);
    float fibonacciNm2 = fibonacci(n - 2);
    float fibonacciN = fibonacciNm1 + fibonacciNm2;
    // printf("\nThe fibonacci of %.2f is : %.2f\n ", n, fibonacciN);
    return fibonacciN;
}