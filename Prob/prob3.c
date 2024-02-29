#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the value of integer %d: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        printf("The minimum element is: \n%d", min);
        return 0;
    }
}