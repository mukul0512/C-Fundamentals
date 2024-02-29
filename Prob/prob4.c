#include <stdio.h>

int main()
{ 
    char name[30];
    printf("Enter the name of the user: \n");
    scanf("%s", &name);
    printf("The user name is: %s\n", name);
    return 0;
}