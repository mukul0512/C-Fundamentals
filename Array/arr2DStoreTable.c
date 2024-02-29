/*

Create a 2D array, storing the table of 2 & 3

ex -> 2 X 10

int tables[2][10];

*/

#include <stdio.h>

void storeTable(int arr[][10], int n, int m, int num);

int main()
{
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for (int i = 0; i < 10; i++) // 0 to 10
    {
        printf("%d\t", tables[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) // 0 to 10
    {
        printf("%d\t", tables[1][i]);
    }
    return 0;
}

void storeTable(int arr[][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++) // 0 to 10
    {
        arr[n][i] = num * (i + 1); // 2, 4, 6, 8, ......, 20

        // arr[0][0], arr[0][1], arr[0][2], arr[0][3], .......arr[0][9]

        // arr[1][0], arr[1][1], arr[1][2], arr[1][3], .......arr[1][9]
    }
}
