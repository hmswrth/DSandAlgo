// Write a program to find a unique number in an array where all numbers
// except one, are present thrice.

#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
   return ((n & (1 << pos))!=0);
}

int setBit(int n, int pos)
{
   return (n | (1 << pos));
}

int unique(int arr[], int n)
{
   int res = 0;
   for (int i = 0; i < 64; i++)
   {
      int sum = 0;
      for (int j = 0; j < n; j++)
      {
         if (getBit(arr[j], i) == 1)
         {
            sum++;
         }
      }
      if (sum % 3 != 0)
         res = setBit(res, i);
   }
   return res;
}

int main()
{
   int arr[] = {1, 1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 5, 5};
   cout << unique(arr, 13) << endl;
   return 0;
}