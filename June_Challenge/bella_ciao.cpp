#include <bits/stdc++.h>
using namespace std;
#define int long long int

void bella()
{
   int D, d, P, Q;
   cin >> D >> d >> P >> Q;

   int counter = 0;
   int res = 0;
   while (D > 0)
   {
      int interest = P + (counter * Q);
      if (D <= d)
         d = D;
      res = res + (d * interest);
      counter++;
      D -= d;
   }
   cout << res << endl;
}

int32_t main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      bella();
   }

   return 0;
}