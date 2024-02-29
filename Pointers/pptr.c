/*

-> Find the value of 'i' from it's pointer to pointer?

ex ->  float price = 100.00;
       float *ptr = &price;
       float **pptr = &ptr;

*/

#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    int *pptr = &ptr;
    int **pptr = &(*pptr);

    return 0;
}