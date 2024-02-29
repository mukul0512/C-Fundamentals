/*

Number square pattern

12345   
12345  
12345       
12345
12345

*/

#include <stdio.h>

void numberSquare(int n);

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    numberSquare(n);

    return 0;
}

void numberSquare(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}
