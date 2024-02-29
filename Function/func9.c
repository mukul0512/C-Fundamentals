#include <stdio.h>
#include <math.h>

float areaSquare(float side);

float areaCircle(float r);

float areaRectangle(float l, float b);

int main()
{
    float s, r, length, breadth;
    printf("\nThe area of a square is: \n %.2f", areaSquare(s));
    printf("\nThe area of a circle is: \n %.2f", areaCircle(r));
    printf("\nThe area of a rectangle is: \n %.2f", areaRectangle(length, breadth));
    return 0;
}

float areaSquare(float side)
{
    printf("\nEnter the side of square :\n");
    scanf("%f", &side);
    return pow(side, 2);
}

float areaCircle(float r)
{
    float pi = 3.14;
    printf("\nEnter the value of radius : \n");
    scanf("%f", &r);
    return pi * r * r;
}

float areaRectangle(float l, float b)
{
    printf("\nEnter the length of a rectangle :\n");
    scanf("%f", &l);
    printf("\nEnter the breadth of a rectangle :\n");
    scanf("%f", &b);
    return l * b;
}