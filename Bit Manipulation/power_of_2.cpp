#include<bits/stdc++.h>
using namespace std;

bool powerof2(){
   int n;
   cin>>n;
   return (n && !(n&n-1));
}

int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
      cout<<powerof2()<<endl;
   }
   
   return 0;
}