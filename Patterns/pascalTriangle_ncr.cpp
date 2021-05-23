#include <iostream>
using namespace std;

// Pascal Triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

int fact(int num)
{
   int factorial = 1;
   for (int i = 2; i <= num; i++)
   {
      factorial *= i;
   }
   return factorial;
}

int main()
{
   cout << "Enter a value of n: ";
   int n;
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         cout << fact(i) / (fact(j) * fact(i - j)) << " "; //ncr formula
      }
      cout << endl;
   }
   return 0;
}
