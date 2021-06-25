#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int p, int i){
   if(i == n){
      return -1;
   }
   if(arr[i] == p){
      return i;
   }
   return firstocc(arr, n, p, i+1);
}

int lastocc(int arr[], int n, int p, int i){
   if(i==n){
      return -1;
   }
   int el = lastocc(arr, n,p,i+1);
   if(el != -1){
      return el;
   }
   if(arr[i]==p){
      return i;
   }
   return -1;
}

int main(){
      int n, p;
      cin>>n>>p;
      int arr[n];
      for(int i=0; i<n; i++){
         cin>>arr[i]; 
      }
      cout<<firstocc(arr, n, p, 0)<<" "<<lastocc(arr, n ,p , 0);

   return 0;
}