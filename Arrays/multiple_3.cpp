#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      int arr[3];
      for (int j = 0; j < 3; j++)
      {
         cin >> arr[j];
      }
      if((arr[1] + arr[2]) % 3 == 0){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

   }
   return 0;
}