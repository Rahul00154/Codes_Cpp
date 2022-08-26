#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int s,int e){
   cout<<endl;

   for(int i = s;i<=e;i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
}

bool binarySearch(int *arr,int s,int e,int k){
    //base case

    printArray(arr,s,e);

    if(s>e){
       return -1;
    }

    int mid = s+(e-s)/2;

    cout<<"Value of arr mid is "<<arr[mid]<<endl;
    //element found
    
    if(arr[mid]==k){
       return true;
    }

    if(arr[mid]<k){
       return binarySearch(arr,mid+1,e,k);
    }
    else{
       return binarySearch(arr,s,mid-1,k);
    }
}

int main(){
    
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 10;

    cout<<"Present or not "<<binarySearch(arr,0,5,10);


return 0;
}