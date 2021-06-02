// Problem
// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// Constraints
// 1 <= N,M <= 1,000

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, m, target;
   cin >> n >> m >> target;
   int arr[n][m];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> arr[i][j];
      }
   }

   int r = 0, c = m - 1;
   bool ans = 0;
   while (r < n && c >= 0)
   {
      if (arr[r][c] == target)
      {
         ans = 1;
         break;
      }
      else if (arr[r][c] < target)
         r++;
      else
         c--;
   }
   if (ans == 1)
      cout << "Element found at: " << r << "," << c << endl;
   else
      cout << "Not Found" << endl;
   return 0;
}