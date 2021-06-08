// Write a program to find a unique number in an array where all numbers except
// one, are present twice.

// for arr[] = {1, 2, 3, 4, 1, 2, 3}:
// what we can write:
// xorsum = 0 ^ 1;
// xorsum = 0 ^ 1 ^ 2;
// .
// .
// .
// xorsum = 0 ^ 1 ^ 2 ^ 3 ^ 4 ^ 1 ^ 2 ^ 3;
// By Commutative Property -
// xorsum = 0 ^ (1 ^ 1) ^ (2 ^ 2) ^ (3 ^ 3) ^ 4;
// xorsum = 0 ^ 0 ^ 0 ^ 0 ^ 4;
// xorsum = 4;

#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n)
{
   int xorsum = 0;
   for (int i = 0; i < n; i++)
      xorsum = xorsum ^ arr[i];
   
   return xorsum;
}

int main()
{
   int arr[] = {1, 1, 2, 2, 3, 4, 4, 3, 5};
   cout << unique(arr, 9) << endl;
   return 0;
}