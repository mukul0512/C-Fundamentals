/*

Pyramid Pattern

k = (2 * i) - 1    -> for star print
j = (n - i)        -> for space


i = 1     *        ->  1 = (2 * 1) - 1 = 2 - 1
i = 2    ***       ->  3 = (2 * 2) - 1 = 4 - 1
i = 3   *****      ->  5 = (2 * 3) - 1 = 6 - 1
i = 4  *******     ->  7 = (2 * 4) - 1 = 8 - 1
i = 3   *****      ->  5 = (2 * 3) - 1 = 6 - 1
i = 2    ***       ->  3 = (2 * 2) - 1 = 4 - 1
i = 1     *        ->  1 = (2 * 1) - 1 = 2 - 1


*/

#include <stdio.h>

void pyramidPattern(int n);

int main()
{
    int n;
    printf("Enter the no of line or rows : ");
    scanf("%d", &n);

    pyramidPattern(n);

    return 0;
}

void pyramidPattern(int n)
{
    for (int i = 1; i <= n; i++) // i for no of rows or line
    {
        int space = n - i;
        for (int j = 1; j <= space; j++) // j for no of white spaces
        {
            printf(" ");
        }
        int star = 2 * i - 1;
        for (int k = 1; k <= star; k++) // k for no of items or columns
        {
            printf("*");
        }
        printf("\n");
    }
    // Now we will print inverted triangle

    for (int i = n - 1; i >= 1; i--) // i for no of rows or line
    {
        int space = n - i;
        for (int j = 1; j <= space; j++) // j for no of white spaces
        {
            printf(" ");
        }
        int star = 2 * i - 1;
        for (int k = 1; k <= star; k++) // k for no of items or columns
        {
            printf("*");
        }
        printf("\n");
    }
}
