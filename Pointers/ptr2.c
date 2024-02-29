/*



*/

#include <stdio.h>

int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d\n", x);       // 0
    printf(" *ptr = %d\n", *ptr); // 0

    *ptr += 5;                    // *ptr = *ptr + 5 = 0 + 5 = 5
    printf(" x = %d\n", x);       // 5
    printf(" *ptr = %d\n", *ptr); // 5

    (*ptr)++;                     //  *ptr = 5
    printf(" x = %d\n", x);       //   *ptr + 1 = 6
    printf(" *ptr = %d\n", *ptr); // *ptr = 6
                                  // Output will be   ->  x = 0
    return 0;                     //                  ->  *ptr = 0
}                                 //                  -> x = 5
                                  //                  ->  *ptr = 5
                                  //                  -> x = 6
                                  //                  ->  *ptr = 6