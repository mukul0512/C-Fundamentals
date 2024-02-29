#include <stdio.h>

void printTable(int num);

int main()
{
    int n;
    printf("\nEnter the value of n: \n");
    scanf("%d", &n);
    printTable(n);
    return 0;
}

void printTable(int num){
    for (int i = 1; i <= 10; i++)
    {
        int table = i * num;
        printf("\n%d X %d = %d\n", num, i, table);
    }
}
