#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
   int currSum =0, maxSum = 0;
   for (int i = 0; i < n; i++)
   {
      currSum += arr[i];
      if(currSum < 0){
         currSum = 0;
      }
      maxSum = max(maxSum, currSum);
   }
   return maxSum;
}

int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
         cin>>arr[i]; 
      }
      int nonWrapSum = 0, wrapSum = 0, sum = 0;

      nonWrapSum = kadane(arr, n);
      for (int i = 0; i < n; i++)
      {
         sum+=arr[i];
         arr[i] *= -1;
      }
      wrapSum = sum + kadane(arr,n);
      cout<<max(wrapSum,nonWrapSum)<<endl;
   return 0;
}
