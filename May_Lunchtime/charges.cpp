#include <bits/stdc++.h>
using namespace std;
#define int long long int

void charges()
{
   int n, k;
   cin >> n >> k;
   string s;
   cin >> s;
   int len = n - 1; //lowest len that a string could have here
   for (int i = 0; i < n - 1; i++)
   { //calculating the initial length
      if (s[i] == s[i + 1])
         len++;
   }
   while (k--)
   {
      int q;
      cin >> q;
      q--;
      if (s[q] == '1')
         s[q] = '0';
      else
         s[q] = '1';
      // cout<<"q: "<<q<<"s: "<<s<<endl;
      if (q > 0)
      {
         if (s[q] == s[q - 1])
            len++;
         else
            len--;
      }
      if (q < n - 1)
      {
         if (s[q] == s[q + 1])
            len++;
         else
            len--;
      }
      cout << len << endl;
   }
}

int32_t main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
      charges();
   return 0;
}