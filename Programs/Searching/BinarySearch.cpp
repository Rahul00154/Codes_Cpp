#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){

  int start = 0;
  int end = n-1;
  
  int mid =  start + (end-start)/2; 
   
   while( start <= end ){
     
     if(arr[mid]==key){
       return mid;
     }
     //go to right part
     if(key>mid){
       start=mid+1;
     }
     //go to left part
     else{
       end=mid-1;
     }
     mid = start + (end-start)/2; 
   }
   return -1;
}

int main(){

int n,key;

cout<<"Enter size of array "<<endl;
cin>>n;

int arr[100];

cout << " Enter element "<<endl;

for(int i=0;i<n;i++){

  cin>>arr[i];
}
cout<<"Enter Key to search for "<<endl;

cin >> key;

int index = binary_search(arr,n,key);

cout<<"key at index "<<index<<endl;

return 0;
}