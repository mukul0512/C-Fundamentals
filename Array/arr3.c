/*

-> Pointer arithmetic : pointer can be incremented and decremented.

i++ ->  first print then increment called as (post increment).
++i ->  first increment then print called as (pre increment).

Note -> int is 4 byte, float is 4 byte, char is 1 byte

-> We can also subtract one pointer from another

-> We can also compare 2 pointer

*/

#include <stdio.h>

int main()
{
    // for int
    // int age = 22;
    // int *ptr = &age;
    // printf("\n%u\n", ptr);
    // ptr++;  //increased by 4 byte i.e 22 + 4 = 26. Depends upon the datatype of pointer and the size of its memory
    // printf("\n%u\n", ptr);
    // ptr--;
    // printf("\n%u\n", ptr);

    // -------********************************************************--------------------------
    
    // for float
    // float price = 22.00;
    // float *ptr = &price;
    // printf("\n%u\n", ptr);
    // ptr++;  //increased by 4 byte i.e 22.00 + 4 = 26.00. Depends upon the datatype of pointer and the size of its memory
    // printf("\n%u\n", ptr);
    // ptr--;
    // printf("\n%u\n", ptr);

    // -------********************************************************--------------------------

    // for char
    // char star = '*';
    // char *ptr = &star;
    // printf("\n%u\n", ptr);
    // ptr++;  //increased by 1 byte. Depends upon the datatype of pointer and the size of its memory
    // printf("\n%u\n", ptr);
    // ptr--;
    // printf("\n%u\n", ptr);

    // -------********************************************************--------------------------

    //    *** * * *** -> We can also subtract one pointer from another ******
    int age = 2;
    int _age = 1;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("\n%u, %u, Difference = %u\n", ptr, _ptr, ptr - _ptr);  
    // here output 1 means difference by 1 integer which is 4 byte

    // Comparision  -> We can also compare 2 pointer
    _ptr = &age;
    printf("\n%u, %u, comparision = %u\n", ptr, _ptr, ptr == _ptr); // here output 1 means true
    return 0;
}