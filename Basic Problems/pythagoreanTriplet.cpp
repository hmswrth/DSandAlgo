#include<iostream>
using namespace std;
// Pythagorean Triplet
// a^2 == b^2 + c^2
bool check(int x, int y, int z){
   int a,b,c;
   a = max(max(x,y),z);
   if(a == x){
      b=y;
      c=z;
   }
   else if (a == y)
   {
      b=x;
      c=z;
      }
   else{
      b=x;
      c=y;
   }
   if(a*a == b*b + c*c )
      return true;
   else  
      return false;
}

int main()
{
   int x,y,z;
   cin>>x >>y >>z ;
   if(check(x,y,z))
      cout<<"Pythogorean Triplet";
   else
      cout<<"Not a Pythagorean Triplet";
   return 0;
}
