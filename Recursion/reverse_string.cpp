// given a string, reverse the string using recursive function

#include<bits/stdc++.h>
using namespace std;

void reverse(string s, int n){
   if(n == 0)
      return;
   string s1 = s.substr(1,n-1);
   reverse(s1, s1.length());
   if(s.length()>0){
      cout<<s[0];
   }
}

void reverse_string(string s){
   if(s.length() == 0){
      return ;
   }
   reverse_string(s.substr(1));
   cout<<s[0];
}

int main(){
   string s;
   cin>>s;
   // reverse(s,s.length());
   reverse_string(s);
   return 0;
}