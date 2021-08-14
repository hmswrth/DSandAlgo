#include <bits/stdc++.h>
using namespace std;

#define int long long int
string makeFancyString(string s)
{
   vector<int> indices;
   if (s.size() >= 3)
   {
      int L = 0, R = 2;
      while (R < s.size())
      {
         if (s[L] == s[R])
         {
            if (s[L + 1] == s[L])
            {
               indices.push_back(L);
               L += 1;
               R += 1;
            }
            else
            {
               L += 1;
               R += 1;
            }
         }
         else
         {
            L += 1;
            R += 1;
         }
      }
      for (int i = 0; i < indices.size(); i++)
      {
         s.erase(s.begin()+indices.at(i));
      }
      return s;
   }
   else
      return s;
}

int32_t main()
{
   string s;
   cin >> s;
   cout << makeFancyString(s);
   return 0;
}