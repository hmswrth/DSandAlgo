#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      int n,h;
      cin >> n>>h;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      int max_till_now = INT_MAX, max_so_far=0;
      for (int i = 0; i <= h; i++)
      {
         for (int j = i; j < n; j+=h+1)
         {
            // cout<<"J : "<<arr[j]<<endl;
            max_so_far += arr[j];
            // cout<<"max so far :"<<max_so_far<<endl; 

         }
         if(max_so_far < max_till_now){
            max_till_now = max_so_far;
            max_so_far = 0;
            // cout<<"max till now"<<max_till_now<<endl;
         }
      }
      cout<<max_till_now;
   }

   return 0;
}