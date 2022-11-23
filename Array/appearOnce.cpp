#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
           return arr[i];
        }
        else
           i++;
    }
    
}

int main(){
   
   int arr[] = {1,1,2,5,5};
   int size = sizeof(arr)/sizeof(arr[0]);

   search(arr,size); 
}