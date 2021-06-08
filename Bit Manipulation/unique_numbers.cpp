// Write a program to find 2 unique numbers in an array where all numbers
// except two, are present twice.
#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
   return (n & (1 << pos) != 0);
}

void uniqueNums()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];

   int xorsum = 0;
   for (int i = 0; i < n; i++)
      xorsum = xorsum ^ arr[i];

   int setbit = 0, pos = 0, tempxor = xorsum;
   while (setbit != 1)
   {
      setbit = xorsum & 1; //to get right most setbit
      pos++;
      xorsum >> 1;
   }

   int newxor = 0;
   for (int i = 0; i < n; i++)
   {
      if (getBit(arr[i], pos - 1))
         // cout << "arr[i] : " << arr[i] << endl;
         newxor = newxor ^ arr[i];
   }

   cout << newxor << " "<<(newxor ^ tempxor)<<endl;
   // cout << (newxor ^ tempxor) << endl;
}

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      uniqueNums();
   }

   return 0;
}