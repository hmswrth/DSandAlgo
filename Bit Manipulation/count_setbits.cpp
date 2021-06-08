#include <bits/stdc++.h>
using namespace std;

int countsetbits()
{
   int n;
   cin >> n;
   int count = 0;
   while (n)
   {
      n = (n & n - 1);
      count++;
   }
   return count;
}

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      cout<<countsetbits()<<endl;
   }

   return 0;
}