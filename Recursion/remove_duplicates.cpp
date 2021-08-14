#include<bits/stdc++.h>
using namespace std;

string remove_duplicates(string s){
   if(s.length() == 0){
      return "";
   }
   char a = s[0];
   string ans = remove_duplicates(s.substr(1));
   if(a == ans[0]){
      return ans;
   }
   else
      return a + ans;

}

int main(){
   string s;
   cin>>s;
   cout<<remove_duplicates(s);
   return 0;
}