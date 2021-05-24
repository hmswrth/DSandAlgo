// Given an integer n (in base 10) and a base k, return the sum of the digits of n after converting n from base 10 to base k.
// After converting, each digit should be interpreted as a base 10 number, and the sum should be returned in base 10.

#include <iostream>
using namespace std;

int getSum(int n)
{
   int ans = 0;
   while (n > 0)
   {
      ans += n % 10;
      n /= 10;
   }
   return ans;
}

int convertToBase(int n, int k)
{
   int ans = 0;
   int base = 1;
   while (base <= n)
   {
      base *= k;
   }
   base /= k;

   while (base > 0)
   {
      int lastDigit = n / base;
      n -= lastDigit * base;
      base /= k;
      ans = ans * 10 + lastDigit;
   }
   return ans;
}

int sumBase(int n, int k)
{
   int ans = 0;
   //         base case
   if (k == 10)
   {
      ans = getSum(n);
   }
   else
   {
      int converted = convertToBase(n, k);
      ans = getSum(converted);
   }
   return ans;
}

int main()
{
   int n, k;
   cin >> n >> k;

   cout << sumBase(n, k);
}
