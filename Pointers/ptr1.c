/*

int age = 22;

int *ptr = &age;   -> *ptr means value at address i.e * symbol denotes value at address of
                   ->  &age means address of i.e & symbol denotes address of

int _age = *ptr    -> results 22

formate specifier for ptr is always %p means pointer address prints hexadecimal value but you can also use %u to prints normal address

-> %u means unsigned


*/

#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    // print value
    printf("The value of _age is : %d\n", _age);
    printf("The value of *ptr is : %d\n", *ptr);
    printf("The value of *(&age) is : %d\n", *(&age));
    printf("The value of *(&age) is : %u\n", *(&age));
    printf("The (unsigned int value) of _age is : %u\n", _age);
    printf("The (unsigned int value) of *ptr is : %u\n", *ptr);
    // print address  
    printf("\nThe (unsigned int address) of &age is : %u\n", &age);
    printf("The (unsigned int address) of ptr is : %u\n", ptr);

    // ------********************-------------------***************************

    // print address  
    printf("\nThe (unsigned int address) of *ptr is : %u\n", &ptr);
    printf("\nThe (hexadecimal address) of &age is : %p\n", &age);
    printf("\nThe (hexadecimal address) of &ptr is : %p\n", &ptr);
    printf("\nThe (hexadecimal address) of *ptr is : %p\n", *ptr);
    return 0;
}