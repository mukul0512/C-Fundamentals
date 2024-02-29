/*

Multidimensional arrays  -> 2D Array

ex -> 
int arr[][] = {{1, 2}, (3, 2)};  -> Declare

Access 

arr[0][0];
arr[0][1];
arr[1][0];
arr[1][1];


Que -> Store 2 students marks of 3 subjects using 2D Array?

2 X 3

*/

#include <stdio.h>

int main()
{
    int marks[2][3];  // _ _ _ | _ _ _
    // first student of 3 subjects 
    marks[0][0] = 90;
    marks[0][1] = 91;
    marks[0][2] = 93;

   printf("\nFirst student marks of first subject is: %d\n ", marks[0][0]);
   printf("\nFirst student marks of second subject is: %d\n ", marks[0][1]);
   printf("\nFirst student marks of third subject is: %d\n ", marks[0][2]);

    // second student of 3 subjects 
    marks[1][0] = 94;
    marks[1][1] = 95;
    marks[1][2] = 96;
   
   printf("\nsecond student marks of first subject is: %d\n ", marks[1][0]);
   printf("\nsecond student marks of second subject is: %d\n ", marks[1][1]);
   printf("\nsecond student marks of third subject is: %d\n ", marks[1][2]);
   
    return 0;
}