/*

Que -> Create a structure to store vectors. Then make a function to return sum of 2 vectors.

Vectors 

-> are geometrical entities that have magnitude and direction.

->  A vector is a quantity or phenomenon that has two independent properties: magnitude and direction.
 
-> Examples of vectors in nature are velocity, momentum, force, electromagnetic fields, and weight.

*/

#include <stdio.h>

struct vector{
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main()
{
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calcSum(v1, v2, sum);

    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("\nSum of x is : %d\n", sum.x);
    printf("Sum of y is : %d\n ", sum.y);
}