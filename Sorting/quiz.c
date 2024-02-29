/*

Que ->

Given an integer array and an integer k where k <= size of array, We need to return the kth smallest element of the array.

Given ->
int arr[] = {5, 2, 1, 3, 4};

int n = 5;
int k = 3;

Hint 1 -> Apply selection sort

Hint 2 -> To do
          k - 1 passes only

Conclusion -> 

Time complexity will be O(k)

Dry run ->

{5, 2, 1, 3, 4};  -> original array

{1, 2, 5, 3, 4};

{1, 2, 3, 5, 4};

{1, 2, 3, 4, 5}; -> after applying selection sort


*/