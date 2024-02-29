/*

Dynamic Memory Allocation ->

It is a way to allocate memory to a data structure during the runtime.

We need some function to allocate & free memory dynamically.

-----------------------------------------------------------------------------------------

Functions for DMA

a. malloc() -> (memory allocation)

Note ---> must need to #include <stblib.h> to use malloc()

takes number of bytes to be allocated & returns a pointer of type void

ptr = (int *)malloc(5 * sizeof(int));

b. calloc() -> (continuous allocation)

initializes with 0

ptr = (int *)calloc(5, sizeof(int));

c. free() ->

We use it to free memory that is allocated using malloc & calloc

free(ptr);

d. realloc() -> (reallocate)

reallocate (increase or decrease) memory using the same pointer & size.

ptr = realloc(ptr, newSize);

*/

#include <stdio.h>
// Dynamic Memory Allocation
int main()
{
    // sizeof function
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
}