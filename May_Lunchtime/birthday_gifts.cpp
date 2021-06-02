#include <bits/stdc++.h>
using namespace std;

#define int long long int

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
   second += arr[i] + arr[i + 1];
   cout << max(first, second) << endl;
}

int32_t main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      gifts();
   }

   return 0;
}