/*

Strings -> A character array terminated by a '\O' (null character)

null character denotes string termination

Ex ->

Create a string firstName & lastName to store details of user & print all the characters using a loop.

Approach -> 

firstName = "MUKUL";

lastName = "KARNWAl";

for(int i = 0; i != '\0', i++){
    print("%c", i);
}


char name[] = {'M', 'U', 'K', 'U', 'L', '\O'};

char lastName[] = {'K', 'A', 'R', 'N', 'W', 'A', 'L', '\O'};

char fullName[] = {'M', 'U', 'K', 'U', 'L', '', 'K', 'A', 'R', 'N', 'W', 'A', 'L', '\O'};

*/

#include <stdio.h>

void printString(char arr[]);

int main()
{
    char firstName[] = "MUKUL";
    char lastName[] = "KARNWAL";

    printString(firstName);
    printString(lastName);
    

    // char name[] = {'M', 'U', 'K', 'U', 'L', '\0'};
    // printf("name is: %s\n", name);

    // char name2[] = "MUKUL";
    // printf("name is: %s\n", name2);

    // char lastName[] = {'K', 'A', 'R', 'N', 'W', 'A', 'L', '\0'};
    // printf("lastName is: %s\n", lastName);

    // char lastName2[] = "KARNWAL";
    // printf("lastName is: %s\n", lastName2);

    // char fullName[] = {'M', 'U', 'K', 'U', 'L', ' ', 'K', 'A', 'R', 'N', 'W', 'A', 'L', '\0'};
    // printf("fullName is: %s\n", fullName);


    // char fullName2[] = "MUKUL KARNWAL";
    // printf("fullName is: %s\n", fullName2);

    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}