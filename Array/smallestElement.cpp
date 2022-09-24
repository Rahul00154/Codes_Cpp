#include <bits/stdc++.h>
using namespace std;

/*
int sortarr(vector<int> &arr){

    sort(arr.begin(),arr.end());

    return arr[0];
} */

int smallestElement(vector<int> &arr){
    
    int min = arr[0];
    int n = arr.size();
    for(int i  = 0;i < n;i++){
        if(min>arr[i]){
           min = arr[i];
        }
    }
    return min;
}

int main(){
    
    vector<int> arr1 = {1,2,4,3,0};
    vector<int> arr2 = {8,10,5,7,9};


   // cout<<"The smallest element in arr1 is "<<sortarr(arr1)<<endl;
   // cout<<"The smallest element in arr2 is "<<sortarr(arr2);

   cout<<"The smallest element in arr1 is "<<smallestElement(arr1)<<endl;
   cout<<"The smallest element in arr2 is "<<smallestElement(arr2);


return 0;
}