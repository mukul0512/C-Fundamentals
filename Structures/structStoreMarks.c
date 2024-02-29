/*

Que -> You have to store the marks of 30 students in class. What will you use?

a. array of 30 floats. -> We can use array of 30 floats

b. structures

Que -> Make a structure to store Bank Account Information of a customer of ABC Bank. Also, make an alias for it.

*/

#include <stdio.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
} acc;

int main()
{
    acc acc1 = {123, "Mukul Karnwal"};

    acc acc2 = {234, "Peeyush Karnwal"};

    printf("\nAccount no : %d\n", acc1.accountNo);

    printf("Account no : %d\n ", acc2.accountNo);

    return 0;
}