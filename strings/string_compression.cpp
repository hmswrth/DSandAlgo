// Given a string s, your task is to remove the repeating consecutive characters.
#include<bits/stdc++.h>
using namespace std;

void removeduplicates(string s){
   string res = "";
   for (int i = 1; i < s.size(); i++)
   {
      if(s[i-1] != s[i])
         res.push_back(s[i]);
   }
   cout<<res<<endl;
}

int main(){
   string s = "aaababbbcc";
   removeduplicates(s);
   return 0;
}