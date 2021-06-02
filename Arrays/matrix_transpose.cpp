#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int arr[n][n];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cin >> arr[i][j];
      }
   }

   // transpose
   for (int i = 0; i < n; i++)
   {
      for (int j = i; j < n; j++)
      {
         // swap(arr[i][j], arr[j][i]);
         int temp = arr[i][j];
         arr[i][j] = arr[j][i];
         arr[j][i] = temp;
      }
   }

   // print array
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
         cout << arr[i][j] << " ";
      cout << endl;
   }
   return 0;
}