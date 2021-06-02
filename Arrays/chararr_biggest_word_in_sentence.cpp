#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   cin.ignore();
   char arr[n + 1];
   cin.getline(arr, n + 1);
   cin.ignore();

   int maxLen = 0, curLen = 0;
   int st = 0, maxst = 0;

   for (int i = 0; i <= n; i++)
   {
      if (arr[i] == ' ' || arr[i] == '\0')
      {
         // maxLen = max(curLen, maxLen);
         if (curLen > maxLen)
         {
            maxLen = curLen;
            maxst = st;
         }
         st = i + 1;
         curLen = 0;
      }
      else
         curLen++;
   }

   cout << maxLen << endl;
   for (int i = 0; i < maxLen; i++)
   {
      cout << arr[maxst + i];
   }
   return 0;
}