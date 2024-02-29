/*
Right triangle pattern

*
**
***
****
*****

*/

#include <stdio.h>

void rightTriangle(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    rightTriangle(n);

    return 0;
}

void rightTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}