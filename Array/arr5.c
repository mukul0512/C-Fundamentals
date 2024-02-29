/*

int arr[] = {1, 2, 3, 4, 5};
For the given array, what will the following give?
a. *(arr + 2);

b. *(arr + 5);

*/

#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printf("\na. %d\n ", *(arr + 2));
    printf("\nb. %d\n ", *(arr + 5)); // because arr[5] is not in the array 
    printf("\na. %d\n ", arr[5]); // arr[5] = *(arr + 5) = 0

    return 0;
}