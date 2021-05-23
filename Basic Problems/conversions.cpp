#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal()
{
   int n;
   cin >> n;

   int res = 0;
   int x = 1;
   while (n > 0)
   {
      int lastDigit = n % 10;
      res += lastDigit * x;
      x *= 2;
      n /= 10;
   }
   return res;
}

int octalToDecimal()
{
   int n;
   cin >> n;

   int res = 0;
   int x = 1;
   while (n > 0)
   {
      int lastDigit = n % 10;
      res += lastDigit * x;
      x *= 8;
      n /= 10;
   }
   return res;
}

int hexadecimalToDecimal()
{
   string n;
   cin >> n;

   int length = n.size();
   int x = 1;
   int res = 0;

   // for loop in reverse
   for (int i = length - 1; i >= 0; i--)
   {
      if (n[i] >= '0' && n[i] <= '9')
      {
         res += x * (n[i] - '0');
      }
      else if (n[i] >= 'A' && n[i] <= 'F')
      {
         res += x * ((n[i] - 'A') + 10);
      }
      x *= 16;
   }
   return res;
}

// int decimalToBinary()
// {
//    int n;
//    cin >> n;
//    int res = 0;
//    bool flag  = 1;
//    if (n%2 == 0 ){
//       flag = 0;
//    }
//    while (n > 0)
//    {
//       int rem = n % 2;
//       res = res * 10 + rem;
//       cout<<"res : "<<res<<endl;
//       n /= 2;
//       cout<<"n : "<<n<<endl;                                                                     
//    }
//    if (flag==0){
//       res *=10;
//    }
//    return res;
// }

string decimalToBinary(){
   string n;
   cin>>n;
   string res="";
   stringstream ss;

   for (int i = n.size()-1; i>=0;i--){
      int last = n[i] - '0';
      int rem = last %2;
      // res += char((n[i]-'0')%2);
      ss<<res<<char(rem);
      ss>>res;
   }
   return res;
}

int main()
{
   // cout<<binaryToDecimal()<<endl;
   // cout << octalToDecimal() << endl;
   // cout << hexadecimalToDecimal() << endl;
   cout << decimalToBinary() << endl;
   return 0;
}
