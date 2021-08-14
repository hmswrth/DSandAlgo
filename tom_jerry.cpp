#include<bits/stdc++.h>
using namespace std;

int cal(int c, int d, int n){
   int workdone = 0, days =0;
   while(workdone < n){
      workdone += c;
      if(workdone < n)
         workdone -= d;
      days+=1;
   }
   return days;
}

int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
      int c,d,n;
      cin>>c>>d>>n;
      cout<<cal(c,d,n)<<endl;
   }
   return 0;
}