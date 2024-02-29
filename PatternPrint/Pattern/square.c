/*

Square Pattern

*****
*****
*****
*****
*****

*/

#include <stdio.h>

void square(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    square(n);
    return 0;
}

void square(int n)
{
    for (int i = 1; i <= n; i++)
    { // i is for no of lines or rows
        for (int j = 1; j <= n; j++)
        { // j is for no of items or columns
            printf(" *");
        }
        printf("\n");
    }
}