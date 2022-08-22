#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int key){

  int start = 0;
  int end = n - 1;
  int ans = -1;
  int mid=start+(end-start)/2;
  while(start<=end){
   
   if(arr[mid]==key){
     
     ans = mid;
     
     end=mid-1;

   }
    else if(key>arr[mid]){

    start=mid+1;

    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return ans;
}

int LastOccurence(int arr[],int n,int key){

  int start = 0;
  int end = n - 1;
  int ans = -1;
  int mid=start+(end-start)/2;
  while(start<=end){
   
   if(arr[mid]==key){
     
     ans = mid;
     
     start=mid+1;

   }
    else if(key>arr[mid]){

    start=mid+1;

    }
    else{
      end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return ans;
}

int main(){
int arr[5]={2,3,3,4,5};

cout<<"firstOccurence of 3 is at "<<firstOccurence(arr,5,3)<<endl;

cout<<"LastOccurence of 3 is at "<<LastOccurence(arr,5,3);

return 0;
}