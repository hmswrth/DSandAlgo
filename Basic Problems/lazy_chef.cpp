#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
      /* code */
      int arr[3];
      for (int j = 0; j < 3; j++)
      {
         /* code */
         cin>>arr[j];
      }
      cout<<min(arr[0] * arr[1] , arr[0] + arr[2])<<endl;
   }
   return 0;
}