#include <bits/stdc++.h>
using namespace std;

void tom()
{
   int a, b, c, d, k;
   cin >> a >> b >> c >> d >> k;
   int res = 1;

   // Find min moves to reach jerry at (c,d)
   int minMoves = abs(a - c) + abs(b - d);
   // boundary
   if (minMoves > k)
   {
      res = 0;
   }
   else
   {
      int remMoves = k - minMoves;
      if (remMoves % 2 != 0)
         res = 0;
   }
   if (res)
   {
      cout << "YES" << endl;
   }
   else
      cout << "NO" << endl;
}

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      tom();
   }

   return 0;
}