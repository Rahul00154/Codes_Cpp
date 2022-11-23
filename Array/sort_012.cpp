#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
  // Dutch Flag Algorithm
  int low = 0;
  int mid = 0;
  int high = n - 1;

  while (mid <= high)
  {

    if (arr[mid] == 0)
      swap(arr[mid++], arr[low++]);

    else if (arr[mid] == 1)
      mid++;

    else
      swap(arr[mid], arr[high--]);
  }
}

void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
}


int main(){
  
    int arr[] = {0,0,1,2,1,1,1,1,2,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort012(arr,size);

    printArray(arr,size);



  return 0;
}