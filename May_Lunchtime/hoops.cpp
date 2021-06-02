#include <bits/stdc++.h>
using namespace std;

void hoop()
{
   int n;
   cin >> n;
   if (n % 2 != 0)
      cout << (n / 2) + 1 << endl;
   else
      cout << n / 2 << endl;
}

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      hoop();
   }
   return 0;
}