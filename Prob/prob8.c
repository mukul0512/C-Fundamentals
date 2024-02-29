#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i = i + 1)
    {
        printf("%d X %d = %d\n", n, i,  n * i);
    }
    return 0;
}