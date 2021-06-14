/* 
Objectives:
1. Print the number in increasing order up to n.
2. Print the number in decreasing order from n to 1.
Approach:
For increasing order, we first print the remaining numbers using recursion and
then print the current number.
For decreasing order, we first print the current number and then print the
remaining number using recursion.
Time Complexity: O(N)
Space Complexity: O(N) 
*/
#include<bits/stdc++.h>
using namespace std;

void dec(int n){
   if(n==1){
      cout<<1<<" ";
      return;
   }
   cout<<n<<" ";
   dec(n-1);
}

void inc(int n){
   if(n==1){
      cout<<1<<" ";
      return ;
      }
   inc(n-1);
   cout<<n<<" ";
}

int main(){
   int n;
   cin>>n;
   inc(n);
   cout<<endl;
   dec(n);
   return 0;
}