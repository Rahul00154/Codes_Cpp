#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int size){

    int count = 0;
    for(int i=0; i<size;i++){

       if(arr[i]==0){
        count++;
       }
    }
    return count;
}

int main(){
    int arr[6]={1, 2, 3, 0, 0, 0};
    cout<<countZeroes(arr, 6);

return 0;
}