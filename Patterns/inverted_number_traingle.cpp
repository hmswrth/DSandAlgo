#include <iostream>
using namespace std;

int main()
{

   cout << "Enter the value of n: ";
   int n;
   cin >> n;

   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n + 1 - i; j++)
      {
         cout <<j<<" ";
      }
      cout << endl;
   }

   return 0;
}