#include <stdio.h>
// declaration/prototype
void printHello();

int main()
{
    printHello(); //function call
    printHello();
    printHello();
    return 0;
}

// function definition
void printHello(){
    printf("\nHello!\n");
}
