/*

wpt store the first n fibonacci numbers.

0, 1, 1, 2, 3, 5, 8, 13, 21 .......

nth = (n - 1) + (n - 2)

*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter n (n > 2): ");
    scanf("%d", &n);

    int fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < n; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        printf("%d \t", fibonacci[i]);
    }
    printf("\n");
    
    return 0;
}