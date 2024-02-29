/*

Salting

-> Find the salted form of a password entered by user if the salt is "123" & added at the end.

ex ->
char pass = "test123";
char salt = "abc";
char test "abc" 123;

*/

#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[])
{
   char salt[] = "123";
   char newPass[200];

   strcpy(newPass, password); // newPass = "test"
   strcat(newPass, salt); // newPass = "test" + "123"
   puts(newPass);
}