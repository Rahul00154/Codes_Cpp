#include <bits/stdc++.h>
using namespace std;

int secndLargest(int arr[],int n){
    if(n==0 || n==1){
       return 1;
    }

    sort(arr,arr+n);

    int secndLarge = arr[n-2];

    return secndLarge;
}


int main(){
   
   int arr[100];
   int size;
   
   cout << "Enter size of array: " << endl;
   cin>>size;

   cout << "Enter Element of Array: " << endl;

   for(int i = 0; i<size; i++){
      cin>>arr[i];
   } 

   cout << secndLargest(arr,size);
  

return 0;
}