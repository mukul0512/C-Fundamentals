/*

Que -> Create a structure  to store complex numbers.(use arrow operator)

Complex no -> Collection of both real and imaginary no.

-> The numbers that are expressed in the form of a+ib where, a,b are real numbers and 'i' is an imaginary number called “iota”

ex ->

struct complex {
    int real;
    int imaginary;
};

*/

#include <stdio.h>

struct complex
{
    int real;
    int imaginary;
};

int main()
{
    struct complex number = {5, 8};

    struct complex *ptr = &number;

    printf("Real part is : %d\n", ptr->real);

    printf("Imaginary part is : %d\n", ptr->imaginary);

    return 0;
}