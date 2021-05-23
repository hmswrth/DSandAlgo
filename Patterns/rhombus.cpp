#include <iostream>
using namespace std;

// Rhombus Pattern
//         * * * * * * 
//       * * * * * *
//     * * * * * *
//   * * * * * *
// * * * * * *

int main()
{
   cout << "Enter the value of n: ";
   int n;
   cin >> n;

   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n - i; j++)
      {
         cout << "  ";
      }
      for (int j = 0; j <= n; j++)
      {
         cout << "* ";
      }
      cout << endl;
   }
   return 0;
}