/* 
Algorithm: We start from 2, and on each encounter of a prime number, we mark
its multiples as composite.
Time Complexity: O(n log log n)
Space Complexity: O(n) 
*/
#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
   int prime[100] = {0};
   for (int i = 2; i <= n; i++)
   {
      if (prime[i] == 0)
      {
         for (int j = i * i; j <= n; j += i)
            prime[j] = 1;
      }
   }
   for (int i = 2; i <= n; i++)
   {
      if (prime[i] == 0)
         cout << i << " ";
   }
}

int main()
{
   int n;
   cin >> n;
   sieve(n);
   return 0;
}