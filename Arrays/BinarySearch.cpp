// runs in O(log n) -> for every iteration, the loop decreases by n/2
// faster than Linear Search O(n) that runs in linear time

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
   int s = 0;
   int e = n;
   while (s <= e)
   {
      int mid = (s + e) / 2;

      if (arr[mid] == k)
      {
         return mid;
      }
      else if (arr[mid] > k)
      {
         e = mid - 1;
      }
      else
      {
         s = mid + 1;
      }
   }
   return -1;
}

int main()
{
   int n, k;
   cin >> n;

   int arr[n];

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   cin >> k;

   cout << binarySearch(arr, n, k) << endl;
   return 0;
}