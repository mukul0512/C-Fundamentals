#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b;
    printf("\nEnter the value of a\n");
    scanf("%d", &a);
    printf("\nEnter the value of b\n");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("\nThe sum of a + b is : \n%d", s);
    return 0;
}

int sum(int x, int y){
   return x + y;
}