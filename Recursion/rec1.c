/*

Note  
-> The work is done by recursion can be also done by loop and vise- versa.
-> ex- Print Hello 5 times using loop
-> ex- Print Hello 5 times using recursion

*/

// #include <stdio.h>

// void printHello();

// int main()
// {
//     printHello();
//     return 0;
// }

// void printHello(){
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\nHello\n");
//     }
    
// }

// ex- Print Hello 5 times using recursion

#include <stdio.h>

void printHello(int n);

int main()
{
    // int count;
    // printHello(count);
    printHello(5);

    return 0;
}

void printHello(int n){
    // printf("\nEnter the value of n: \n");
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nHello\n");
    // }
//  Recursion function
    if (n == 0)
    {
        return;
    }
    printf("\nHello \n");
    printHello(n - 1);

}