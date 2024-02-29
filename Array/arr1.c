/*

-> Collection of similar data types stored at contigious memory locations.

*/

#include <stdio.h>

int main()
{
    // int marks1 = 91;
    // int marks2 = 92;
    // int marks3 = 93;

    // int marks[] = {91, 92, 93};

    int marks[3];

    printf("Enter physics : ");
    scanf("%d", &marks[0]);

    printf("Enter maths : ");
    scanf("%d", &marks[1]);

    printf("Enter chemistry : ");
    // scanf("%d", &marks[2]); // it's correct
    scanf("%d", &marks[4]); // gives run time error because total size of array is marks[3]

    printf("physics = %d, maths = %d, chemistry = %d", marks[0], marks[1], marks[2]);

    return 0;
}