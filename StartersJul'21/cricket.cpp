#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
      int r1,w1,c1;
      cin>>r1>>w1>>c1;
      int r2,w2,c2;
      cin>>r2>>w2>>c2;
      int countA=0, countB=0;
      if(r1>r2)
         countA+=1;
      else if(r1<r2)
         countB+=1;
      if(w1>w2)
         countA+=1;
      else if(w1<w2)
         countB+=1;
      if(c1>c2)
         countA+=1;
      else if(c1<c2)
         countB+=1;
      
      if(countA>countB)
         cout<<"A"<<endl;
      else
         cout<<"B"<<endl;
   }

   
   return 0;
}