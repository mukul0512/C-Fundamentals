/*

Number right triangle

1             
22     
333
4444
55555

*/

#include <stdio.h>

void numberTriangle(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    numberTriangle(n);
    return 0;
}

void numberTriangle(int n)
{
    int count=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", count);
        }
        count++;
        printf("\n");
    }
}