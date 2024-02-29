#include <stdio.h>

int main()
{
    int x, y, temp;
    printf("x");
    scanf("%d", &x);
    printf("y");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("x=%d, y=%d", x, y);
    return 0;
}