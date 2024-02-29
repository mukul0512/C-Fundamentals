/*

Inverted right triangle pattern

n = 5
(n + 1) - i

i = 1 *****  = (5 + 1) - 1 = 6 - 1 = 5
i = 2 ****   = (5 + 1) - 2 = 6 - 2 = 4
i = 3 ***    = (5 + 1) - 3 = 6 - 3 = 3
i = 4 **     = (5 + 1) - 4 = 6 - 4 = 2
i = 5 *      = (5 + 1) - 5 = 6 - 5 = 1


*/

#include <stdio.h>

void invertedRightTriangle(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    invertedRightTriangle(n);
    return 0;
}

void invertedRightTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int a = (n + 1) - i;
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}