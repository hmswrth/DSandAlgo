// reverse a given number

#include<iostream>
#include<math.h>
using namespace std;

int main(){
   // cout<<"Enter n: ";
   int n,reverse;
   cin>>n;

   while(n>0){
      int last = n %10;
      reverse = reverse *10 + last;
      n = n/10;
   }
   cout<<reverse;
   return 0;
}