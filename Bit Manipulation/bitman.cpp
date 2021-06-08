// Find if nth bit is set or not
#include<bits/stdc++.h>
using namespace std;

// checks if a bit at a certian position is SET(1) or UNSET(0)
int checkBit(){
   int n, pos;
   cin>>n>>pos;

   int mask = 1<<(pos);

   return (n & mask);
}

// sets the val of bit at any given pos to 1
int setBit(){
   int n, pos;
   cin>>n>>pos;

   int mask = 1<<pos;
   return(mask | n);
}

// clears the val of bit any given pos
int clearBit(){
   int n, pos;
   cin>>n>>pos;

   // 0010
   // 1101
   // 0000
   int mask = ~(1<<pos);
   return (mask & n);
}

//updates the val of bit at any given pos to the given
int updateBit(){
   int n, pos,val;
   cin>>n>>pos>>val;
   // clear, set
   int mask = ~(1<<pos);
   n = (n & mask);
   mask = val << pos;
   return(n|mask);
}


int main(){
   int t;
   cin>>t;
   for (int i = 0; i < t; i++)
   {
      // if(checkBit())
      //    cout<<"SET"<<endl;
      // else 
      //    cout<<"UNSET"<<endl;
      // cout<<setBit()<<endl;
      cout<<clearBit()<<endl;
   }

   
   return 0;
}