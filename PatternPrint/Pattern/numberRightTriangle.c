/*

Number right triangle

1
12
123
1234
12345

*/

#include <stdio.h>

void numberRightTriangle(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    numberRightTriangle(n);
    return 0;
}

void numberRightTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}