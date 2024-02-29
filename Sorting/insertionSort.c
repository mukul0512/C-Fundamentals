/*

Insertion Sort -> Swapping from end till the element finds its position.

Worst case -> 
              0  1  2  3  4

int arr[] =  {5, 4, 3, 2, 1};  -> original array

int arr[] =  {1, 2, 3, 4, 5};  -> after insertion sort

------------------------------------------------------------------------------

Dry run ->

                   {5, 4, 3, 2, 1};  ->  original array

1 time swapping -> {4, 5, 3, 2, 1};  ->  first pass

2 time swapping -> {4, 3, 5, 2, 1};  ->  second pass

3 time swapping -> {3, 4, 5, 2, 1};  ->  third pass

4 time swapping -> {2, 3, 4, 5, 1};  ->  fourth pass

sorted array    -> {1, 2, 3, 4, 5};  ->  fifth pass

***********************************************************************************

Time complexity -> 

1. Worst case   -> O(n ^ 2)

2. Average case -> O(n ^ 2)

3. Best case    -> O(n)


***************************************************************************************

Best case -> 
              0  1  2  3  4

int arr[] =  {5, 4, 3, 2, 1};  -> original array

int arr[] =  {1, 2, 3, 4, 5};  -> after insertion sort

---------------------------------------------------------------------------------

Dry run ->

 0  1  2  3  4

{1, 2, 3, 4, 5};  ->  original array

Note -> Swap happens only when the element is smaller than its left element.

if the size of array is n then there will be n - 1 operation happens in the best case.

Therefore time complexity will be O(n).

***************************************************************************************************

Coding implementation of insertion sort ->

no of passes -> n - 1 passes

for(int i = 1; i <= n - 1; i++) {
    int j = i;
    while(j >= 1 && arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
        j--;
    }
}

---------------------------------------------------------------------------------------------------

Que -> Is Insertion Sort Stable ?

Answer is yes, iff relative order maintained after sorting the original array.

Stable Sort ??? 

Ex -> if whatever duplicate element comes first then the final sorted array duplicate element also comes first.

   just like the following example where, element 2 is comes before 2' therefore under sorted array also comes in the same order.

int arr[] = {1, 2, 5, 2', 4};  Original array


int arr[] = {1, 2, 2', 4, 5};  Stable Sort

*********************************************************************************

    


*/

#include <stdio.h>

int main()
{
    int arr[] =  {5, 4, 3, 2, 1};
    int n = 5;
    printf("Unsorted array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // no of passes -> n - 1
    for(int i = 1; i <= n - 1; i++) {  //  Outer loop will stand for no. of passes.
    int j = i;
    while(j >= 1 && arr[j] < arr[j - 1]) { // Inner while loop will do the swapping.
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        j--;
    }
}
printf("\n");
    printf("Sorted array : \n");
    for (int i = 0; i < n; i++)                                                         
    {
        printf("%d ", arr[i]);
    }
    return 0;
}