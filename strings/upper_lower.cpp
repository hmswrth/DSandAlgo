#include <bits/stdc++.h>
using namespace std;

void upper_using_ascii(string s)  //'a' - 'A' = 32
{
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i] >= 'a' && s[i] <= 'z')
         s[i] -= 32;
   }
   cout << s << endl;
}

void upper_using_transform(string s)
{
   transform(s.begin(), s.end(), s.begin(), ::toupper);
   cout << s << endl;
}

void lower_using_ascii(string s)
{
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i] >= 'A' && s[i] <= 'Z')
         s[i] += 32;
   }
   cout << s << endl;
}

void lower_using_transform(string s)
{
   transform(s.begin(), s.end(), s.begin(), ::tolower);
   cout << s << endl;
}

int main()
{
   string s = "ahbvakbvkbkajbvbka";
   upper_using_ascii(s);
   lower_using_ascii(s);
   upper_using_transform(s);
   lower_using_transform(s);
   return 0;
}