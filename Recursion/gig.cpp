#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a){
   for (int i = 2; i < a; i++)
   {
      if(a%i == 0)
         return false;
   }
   return true;
}
int maxMoves(int a){
   int c = a;
   if(a%2 == 0){
      c+= a/2;
      c++;
   }
   else{
      if(isPrime(a)){
         c++;
      }

   }
   return c;
}

int main(){
   int n, c=0;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
      int a;
      cin>>a;
      c += maxMoves(a);
   }
   cout<<c<<endl;
   return 0;
}