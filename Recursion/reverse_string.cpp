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

int main(){
   string s;
   cin>>s;
   reverse(s,s.length());
   return 0;
}