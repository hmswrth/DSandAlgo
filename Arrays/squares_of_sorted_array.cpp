// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// used insetion sort (not efficient) takes O(n^2)
#include <bits/stdc++.h>
using namespace std;

void sortedSquares()
{
   int n;
   cin >> n;

   int nums[n];

   for (int i = 0; i < n; i++)
   {
      cin >> nums[i];
   }

   for (int i = 0; i < n; i++)
   {
      nums[i] = nums[i] * nums[i];
   }

   int counter = 1;
   while (counter < n)
   {
      for (int i = 0; i < n - counter; i++)
      {
         if (nums[i] > nums[i + 1])
            swap(nums[i], nums[i + 1]);
      }
      counter++;
   }
   for (int i = 0; i < n; i++)
   {
      cout << nums[i] << " ";
   }
}

int main()
{

   sortedSquares();

   return 0;
}