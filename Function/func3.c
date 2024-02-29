#include <stdio.h>

void indian();
void french();

int main()
{
    char user;
    printf("Choose your country (i: Indian/ f: French)\n");
    scanf("%c", &user);
    if (user == 'i')
    {
        indian();
    }
    else
    {
        french();
    }
    return 0;
}

void indian()
{
    printf("Namaste\n");
}

void french()
{
    printf("Bonjoure\n");
}