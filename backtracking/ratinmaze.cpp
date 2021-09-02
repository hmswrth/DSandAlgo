/* Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls.
Idea: Try all the possible paths to see if you can reach (n-1,n-1) */

#include<bits/stdc++.h>
using namespace std;

bool canMove(int**arr, int x, int y, int n){
   if(x<=n-1 && y<=n-1 && arr[x][y] == 1)
      return true;
   return false;
}

bool ratInMaze(int**arr, int x, int y, int n, int** path){
   if(x==n-1 && y==n-1){
      path[x][y]=1;
      return true;
   }
   if(canMove(arr, x,y,n)){
      path[x][y] = 1;
      if(ratInMaze(arr, x+1, y, n, path)){
         return true;
      }
      if(ratInMaze(arr, x, y+1,n, path)){
         return true;
      }
      path[x][y] = 0;  //backtracking
      return false;
   }
   return false;
}

int main(){
   int n;
   cin>>n;
   int** arr = new int*[n];
   for (int i = 0; i < n; i++)
   {
      arr[i] = new int[n];
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         cin>>arr[i][j];
      }
      
   }

   int** path = new int*[n];
   for (int i = 0; i < n; i++)
   {
      path[i] = new int[n];
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         path[i][j] = 0;
      }
      
   }

   if(ratInMaze(arr,0,0,n,path)){
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            cout<<path[i][j]<<" "; 
         }
         cout<<endl;
      }  
   }
}