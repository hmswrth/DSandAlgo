#include <bits/stdc++.h>
using namespace std;

void gifts()
{
   int n, k;
   cin >> n >> k;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   sort(arr, arr + n, greater<int>());
   int i = 0;
   int first = 0, second = 0;
   for (i; i < (2 * k) - 1; i++)
   {
      if (i % 2 == 0)
         first += arr[i];
      else
         second += arr[i];
   }
   if (i % 2 == 0)
      first += arr[i] + arr[i + 1];
   else
      second += arr[i] + arr[i + 1];
   cout << max(first, second) << endl;
}

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      gifts();
   }

   return 0;
}