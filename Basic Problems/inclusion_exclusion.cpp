/* 
Inclusion Exclusion principle
In many questions, we are required to include contributions of more than one
term in our answer. This results in inclusion of the same term more than once,
hence we use the principle of inclusion exclusion.

Question
Find the number of numbers in the interval [1,n] which are divisible by a or b.

Approach
We calculate the number of numbers divisible by a and b separately and then
subtract the number of numbers which are divisible by both a and b.
*/

#include<bits/stdc++.h>
using namespace std;

int divisible(int n, int a, int b){
   int c1 = n/a;
   int c2 = n/b;
   int c3 = n/(a*b);

   return c1 + c2 - c3;
}

int main(){
   int n,a,b;
   cin>>n>>a>>b;
   cout<<divisible(n,a,b)<<endl;
   return 0;
}