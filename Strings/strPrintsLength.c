/*

-> Make a program that inputs user's name & prints its length   

ex -> 
char name[100]; // write only first name here as an input
fgets(name, 100, stdin);

ex-> MUKUL\0 // input

     12345
So, length must be 5 as an output

*/

#include <stdio.h>

int countLength(char arr[]);

int main()
{
    printf("Enter first name : ");
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is : %d", countLength(name));
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}