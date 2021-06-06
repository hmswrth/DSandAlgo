// Given a string s of latin characters, your task is to output the character which has
// maximum frequency.
#include <bits/stdc++.h>
using namespace std;

void freq(string s)
{
   int freq[26];
   for (int i = 0; i < 26; i++)
      freq[i] = 0;

   for (int i = 0; i < s.size(); i++)
      freq[s[i] - 'a']++;

   int maxFreq = 0;
   char ans = 'a';

   for (int i = 0; i < 26; i++)
   {
      if (freq[i] > maxFreq)
      {
         maxFreq = freq[i];
         ans = 'a' + i;
      }
   }

   cout << ans << " " << maxFreq << endl;
}

int main()
{
   string s = "abkajakjbblknalvnakjaskabbbbb";
   freq(s);
   return 0;
}