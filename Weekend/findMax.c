#include <stdio.h>

int findMax(int X[], int n)
    {
        int max = X[0];
        for (int i = 1; i < n; i = i + 1)
        {
            if (X[i] > max)
                max = X[i];
        }
        return max;
    }
int main()
{ 
    int a = 0;
    printf("Enter the size of the array:\n");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
         printf("Enter the value of arr[%d]:\n",i);
        scanf("%d", &arr[i]);
    }
    // The array is 24,2,1,7,4
    printf("The array is:");
    for(int i = 0; i < a; i++){
        printf("%d,",arr[i]);
    }
    int max = findMax(arr, a);
    printf("The maximum element is: %d", max);
    return 0;
}
