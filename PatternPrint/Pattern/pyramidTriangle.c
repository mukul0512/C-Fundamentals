/*

Pyramid Pattern

k = (2 * i) - 1    -> for star print
j = (n - i)        -> for space

i = 1     *        ->  1 = (2 * 1) - 1 = 2 - 1
i = 2    ***       ->  3 = (2 * 2) - 1 = 4 - 1
i = 3   *****      ->  5 = (2 * 3) - 1 = 6 - 1
i = 4  *******     ->  7 = (2 * 4) - 1 = 8 - 1
i = 5 *********    ->  9 = (2 * 5) - 1 = 10 - 1

*/

#include <stdio.h>

void pyramidTriangle(int n, int k);

int main()
{
    int n, k;
    printf("Enter the number : ");
    scanf("%d", &n);

    pyramidTriangle(n, k);
    return 0;
}

void pyramidTriangle(int n, int k)
{
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        int star = (2 * i) - 1;
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}