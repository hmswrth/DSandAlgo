#include <bits/stdc++.h>
using namespace std;
#define l1 long long int
#define MOD 1000000007

l1 bexpo(l1 base, l1 n)
{
   l1 ans = 1;
   while (n > 0)
   {
      if (n % 2 == 1)
         ans = (ans * base) % MOD;
      base = (base * base) % MOD;
      n /= 2;
   }
   return ans;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   l1 t;
   cin >> t;
   for (l1 i = 0; i < t; i++)
   {
      l1 n, m;
      cin >> n >> m;
      cout << bexpo(bexpo(2, n) -1, m)%MOD << endl;
   }

   return 0;
}