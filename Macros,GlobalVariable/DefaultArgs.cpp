#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size,int start = 0){

    for(int i = start;i < size;i++){
       cout<<array[i]<<" ";
    }
}

int main(){
    
    int arr[]={1,4,7,8,9};
    int size = 5;

    printArray(arr,size);
    cout<<endl;
    printArray(arr,size,2);

return 0;
}