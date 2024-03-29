// Given a non-negative integer num, return the number of steps to reduce it to zero. If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
   int count = 0;
   while (num > 0)
   {
      if (num % 2 == 0)
      {
         num /= 2;
         count++;
      }
      else
      {
         num -= 1;
         count++;
      }
   }
   return count;
}

int main()
{
   int num;
   cin >> num;
   cout << numberOfSteps(num);
   return 0;
}