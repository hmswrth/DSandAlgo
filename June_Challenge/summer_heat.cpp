#include<bits/stdc++.h>
using namespace std;

void summer(){
   int xa, xb, Xa, Xb;
   cin>>xa>>xb>>Xa>>Xb;
   // int count =  0;
   cout<<(Xa / xa) + (Xb / xb)<<endl;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   for(int i=0; i<t; i++){
      summer();
   }
   return 0;
}