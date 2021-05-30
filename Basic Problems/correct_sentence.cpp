#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   bool ans = 1;
   for (int i = 0; i < n; i++)
   {
      /* code */
      string s;
      cin>>s;
      if(ans){
         bool lang1 = 0, lang2=0;
         for (int j = 0; j < s.length(); j++)
         {
            if(s[j] >= 'a' && s[j] <= 'm')
               lang1 = 1;
            else if(s[j] >= 'N' && s[j] <= 'Z')
               lang2 = 1;
            else
               ans = 0;
         }
         if(lang1 && lang2)
            ans = 0;
      }
   }
   if(ans)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}

int main(){
   int t;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}