#include<bits/stdc++.h>
using namespace std;

string move_x(string s){
   if(s.length() == 0)
      return "";
   char a = s[0];
   string ans = move_x(s.substr(1));
   if(a == 'x')
      return ans + a;
   else 
      return a + ans;
}

int main(){
   string s;
   cin>>s;
   cout<<move_x(s);
   return 0;
}