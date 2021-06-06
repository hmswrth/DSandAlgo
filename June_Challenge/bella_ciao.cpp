#include <bits/stdc++.h>
using namespace std;
#define int long long int

// runs in O(1)
void bella()
{
   int D, d, P, Q;
   cin >> D >> d >> P >> Q;

   int n = D / d;
   int ans = 0;

   if(n %2 == 0){
      ans = (2 * P + (n-1)*Q) * n/2 * d;
      ans+= (D%d) * (P+ n * Q);
   }
   else{
      ans = (P + (n-1)/2 * Q) * n *d;
      ans+= (D%d) * (P+ n * Q);
   }

   cout << ans << endl;
}

// brute approach. TLE for large testcases.
// void bella()
// {
//    int D, d, P, Q;
//    cin >> D >> d >> P >> Q;

//    int counter = 0;
//    int res = 0;
//    while (D > 0)
//    {
//       int interest = P + (counter * Q);
//       if (D <= d)
//          d = D;
//       res = res + (d * interest);
//       counter++;
//       D -= d;
//    }
//    cout << res << endl;
// }

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