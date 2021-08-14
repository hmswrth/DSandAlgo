#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
      int n,m,l;
      cin>>n>>m>>l;
      if(m==1){
         cout<<1<<endl;
         break;
      }
      for (int j = 0; j < m; j++)
      {
         int K;
         cin>>K;
         int arr[K];
         for (int k = 0; k < K; k++)
         {
            cin>>arr[k];
         }
      }
      int col[l];
      for (int j  = 0; j < l; j++)
      {
         cin>>col[i];
      }
      int count = 1;
      for (int j = 0; j < l -1; j++)
      {
         if(col[j] != col[j+1])
            count+=1;
      }
      cout<<count<<endl;
   }
   return 0;
}