// Will the address output be same?

// Answer is no because call by value sends a copy as an address output.

#include <stdio.h>

void printAddress(int n);

void _printAddress(int* num);

int main()
{
    int n = 4;
    int num;
    printf("\n%p\n", &n); //  000000000065FE1C
    printf("\n%u\n", &n); //  6684188
    printAddress(n); 
// ************************************************************************
    printf("\n%p\n", &num);  // 000000000065FE18
    printf("\n%u\n", &num);   //6684184
    _printAddress(&num);   
    return 0;
}

void printAddress(int n)
{
    printf("\n%p\n", &n); //  000000000065FDF0
    printf("\n%u\n", &n); //  6684144
}
//  ********************************************************************************************
void _printAddress(int* num)
{
    printf("\n%p\n", &(*num));  // 000000000065FE18
    printf("\n%u\n", &(*num));  // 6684184
}