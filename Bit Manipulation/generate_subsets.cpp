// Given an array need to generate all possible subsets
#include <bits/stdc++.h>
using namespace std;

void subsets()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   for (int i = 0; i < (1 << n); i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (i & (1 << j))
            cout << arr[j] << " ";
      }
      cout << endl;
   }
}

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      subsets();
   }

   return 0;
}