#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int size){
    bool swapped=false;
    for(int i=0;i<size-1;i++){
        
        for ( int j = i+1; j < size-i-1; j++){
           
           if(arr[j]>arr[j+1]){
            
              swap(arr[j],arr[j+1]);
              swapped=true;
           }  

    }
    if(swapped==false){
        break;
              }
    
    
  }
}

int main(){


return 0;
}