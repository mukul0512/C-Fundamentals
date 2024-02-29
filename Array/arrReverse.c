/*
 Write a function to reverse an array. 

int arr[] = {1, 2, 3, 4, 5, 6};
for(int i = 0; i < n / 2; i++){
    firstValue = arr[i];
    secondValue = arr[n - i - 1];
    arr[i] = secondValue;
    arr[n - i - 1] = firstValue;
}

Note -> Whenever you call an array in main function then it could be call by reference

*/

#include <stdio.h>

void arrReverse(int arr[], int n);

void arrPrint(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    arrReverse(arr, 5);
    arrPrint(arr, 5);

    return 0;
}

void arrReverse(int arr[], int n){
    for(int i = 0; i < n / 2; i++){
        int firstValue = arr[i];
        int secondValue = arr[n - i - 1];
        arr[i] = secondValue;
        arr[n - i - 1] = firstValue;
    }
}

void arrPrint(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}