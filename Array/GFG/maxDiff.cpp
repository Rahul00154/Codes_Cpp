#include <bits/stdc++.h>
using namespace std;

void maxDiff(int arr[], int n){
   
   int element = 0;
   for(int  i = 0; i < n; i++){
       for(int j = i+1; j<n; j++){
         
          int ans = arr[j] - arr[i];
           if(ans>element){
              element = ans;
              
           }
         }
         
       }
       cout << element << " ";
}

int main(){
  
  int arr[7] = {2, 3, 10, 6, 4, 8, 1}; 
  maxDiff(arr,7);
return 0;
}