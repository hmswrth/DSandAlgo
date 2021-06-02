#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   char arr[n+1];
   cin>>arr;
   bool res = 1;
   for (int i = 0; i < n; i++)
   {
      if(arr[i] != arr[n-1-i])
         res=0;
   }
   if(res == 1)
      cout<<"Palindrome"<<endl;
   else 
      cout<<"Not Palindrome"<<endl;
   
   return 0;
}