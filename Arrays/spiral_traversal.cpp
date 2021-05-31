#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;
   int arr[n][m];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> arr[i][j];
      }
   }

   int top = 0, left = 0, down = n - 1, right = m - 1;
   int dir = 0;
   while (top <= down && left <= right)
   {
      if (dir == 0)
      {
         for (int i = top; i <= right; i++)

            cout << arr[top][i] << " ";

         top++;
      }
      else if (dir == 1)
      {
         for (int i = top; i <= right; i++)

            cout << arr[i][right] << " ";

         right--;
      }
      else if (dir == 2)
      {
         for (int i = right; i >= left; i--)

            cout << arr[down][i] << " ";

         down--;
      }
      else 
      {
         for (int i = down; i >= top; i--)

            cout << arr[i][left] << " ";

         left++;
      }
      dir = (dir + 1) % 4;
   }
   return 0;
}