/*

STRING FORMAT SPECIFIER ->  "%s"
  
char name[] = "Mukul";
printf("%s", name);

ex -> 
char name[40];
scanf("%s", name); // no need to write &name because name is a char array and it is a pointer.

-> Ask the user to enter their firstName & print it back to them.
Also try this with their fullName.

Note ->

scanf() cannot input multi-word strings with spaces.

Here, gets() & puts() come into picture.


*/

// #include <stdio.h>

// int main()
// {
//     char name[50];
//     scanf("%s", name);
//     printf("Your name is : %s ", name);
//     return 0;
// }

#include <stdio.h>

int main()
{
    printf("Enter your name: ");
    char firstName[50];
    scanf("%s", firstName);
    printf("Your name is : %s \n", firstName);

    printf("Enter your full name: ");
    char fullName[100];
    scanf("%s", fullName);
    printf("Your name is : %s ", fullName);
    return 0;
}