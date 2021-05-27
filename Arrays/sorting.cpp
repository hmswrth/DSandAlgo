#include <iostream>
using namespace std;

void selectionSort(int n, int arr[]) //O(n^2)
{
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = i; j < n; j++)
      {
         if (arr[j] < arr[i])
         {
            // int temp = arr[j];
            // arr[j] = arr[i];
            // arr[i] = temp;
            swap(arr[i], arr[j]);
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}

void bubbleSort(int n, int arr[]) //O(n^2)
{
   int counter = 1;
   while (counter < n)
   {
      for (int i = 0; i < n - counter; i++)
      {
         if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
      }
      counter++;
   }
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}

void insertionSort(int n, int arr[])  //O(n^2)
{
   for (int i = 1; i < n; i++)
   {
      int key = arr[i];
      int j = i - 1;
      while (j >= 0 && arr[j] > key)
      {
         arr[j + 1] = arr[j];
         j--;
      }
      arr[j + 1] = key;
   }
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}

int main()
{
   int n;
   cin >> n;

   int arr[n];

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   // selectionSort(n, arr);
   // bubbleSort(n, arr);
   insertionSort(n,arr);
   return 0;
}