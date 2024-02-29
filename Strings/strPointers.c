/* 

String using pointers

char *str = "Hello World";
Store string in memory & the assigned address is store in the char pointers 'str'

char *str  = "Hello World"; // can be reinitialized 

char str[] = "Hello World"; 
// cannot be initialized 

*/

#include <stdio.h>

int main()
{
    char *canChange = "Hello world";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello world";
    puts(cannotChange);
    // cannotChange = "Hello"; // expression must be a modifiable lvalue
    cannotChange[12] = "Hello";
    return 0;
}