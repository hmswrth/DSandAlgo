#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      float x, y;
      cin >> x >> y;
      float res = 0;
      if ((x + y) < 6)
      {
         res = 6 - (x + y);
         res /= 6;
      }
      cout << res << endl;
   }

   return 0;
}