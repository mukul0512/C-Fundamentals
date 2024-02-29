/*

Hollow Square Pattern:


-> for star print

-> for space

i = 0  *****      ->  5 = 
i = 1  *   *      ->  2 = 
i = 2  *   *      ->  2 = 
i = 3  *   *      ->  2 = 
i = 4  *****      ->  5 = 


*/

#include <stdio.h>

void hollowSquare(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    hollowSquare(n);

    return 0;
}

void hollowSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}