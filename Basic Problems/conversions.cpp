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

int decimalToBinary()
{
   int n;
   cin>>n;

   int x = 1;
   int ans = 0;
   while(x<=n){
      x*=2;
   }
   x/=2;

   while(x>0){
      int binaryLastDigit = n/x; //either 0 or 1 always
      n -= x * binaryLastDigit;
      x/=2;
      ans = ans *10 + binaryLastDigit;
   }
   return ans;
}

// void decimalToBinary(){
//    int n;
//    cin>>n;
//    int binaryNum[32];
//    int i = 0;
//    while(n>0){
//       binaryNum[i] = n%2;
//       i++;
//       n /= 2;
//    }
//    for(int j = i-1; j>=0; j-- ){
//       cout<<binaryNum[j];
//    }
// }

int main()
{
   // cout<<binaryToDecimal()<<endl;
   // cout << octalToDecimal() << endl;
   // cout << hexadecimalToDecimal() << endl;
   cout<<decimalToBinary()<<endl;
   return 0;
}
