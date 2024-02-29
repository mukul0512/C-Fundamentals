#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size: \n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the value of integer %d: \n", n);
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
    float avg = (float)s / n;
    printf("Sum: %d\n", s);
    printf("Average: %.2f\n", avg);
    return 0;
}