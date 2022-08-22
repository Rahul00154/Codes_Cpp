#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(int arr1[], int m, int arr2[],int n ,int arr3[]){
  
    int i = 0, j = 0;
    int k = 0;
    while( i<m && j<n) {
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    //copy first array k element ko
    while(i<m) {
        arr3[k++] = arr1[i++];
    }

    //copy kardo second array k remaining element ko
    while(j<n) {
        arr2[k++] = arr2[j++];
    }
}


void printArray(int ans[],int size){
  
  for(int i=0;i<size;i++){
    
    cout<<ans[i]<<" ";
  
  }
  cout<<endl;
}

int main(){
  int arr1[5]={1,3,5,7,9};
  int arr2[3]={2,4,6};
  int arr3[8]={0};

  mergeSortedArray(arr1, 5, arr2, 3, arr3);

  printArray(arr3,8);
  
  
return 0;
}