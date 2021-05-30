#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t, cat1 = 10, cat2 = 21, cat3 = 42, totalD=0;
   cin>>t;
   for(int i=0; i<t; i++){
      int arr[5];
      for(int j=0; j<5; j++){
         cin>>arr[j];
      }
      totalD = arr[0] * arr[1];
      if(totalD < cat1 ){
         cout<<0<<endl;;
         continue;
      }
      else if(totalD >=cat1 && totalD<cat2){
         cout<< arr[2]<<endl;
         continue;
      }
      else if(totalD >= cat2 && totalD < cat3){
         cout<<arr[3]<<endl;
         continue;
      }
      else{
         cout<< arr[4]<<endl;
         continue;
      }

   }
   return 0;
}