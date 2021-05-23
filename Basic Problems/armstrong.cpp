// Check if a number is armstrong

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   cout << "Enter a number : ";
   int n, original;
   cin >> n;
   int sum = 0;
   original = n;

   while (n > 0)
   {
      int last = n % 10;
      sum += pow(last, 3);
      n = n / 10;
   }
   if (sum == original)
   {
      cout << "Armstrong Number" << endl;
   }
   else
      cout << "Not Armstrong Number" << endl;

   return 0;
}
