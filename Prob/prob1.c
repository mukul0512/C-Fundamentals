#include <stdio.h>

int main()
{
    int n1, n2, n3, s;
    printf("Enter the value of n1:\n");
    scanf("%d", &n1);
    printf("Enter the value of n2:\n");
    scanf("%d", &n2);
    printf("Enter the value of n3:\n");
    scanf("%d", &n3);
    s = n1 + n2 + n3;
    printf("The sum of n1 + n2 + n2 is:%d\n", s);

    // Using for loop
    int n, sum = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of %d:\n ", i + 1);
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("The sum of 3 no is: %d\n", sum);
    return 0;
}