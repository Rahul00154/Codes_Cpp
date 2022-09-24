#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[],int n){
 
  int start=0;
  
  int end=n-1;
  
  int mid=start+(end-start)/2;

  while(start<end){
    
    if(arr[mid]>=arr[0]){
     
      start=mid+1;
    
    }
    
    else{
    
    end=mid;
  }
  
  mid=start+(end-start)/2;
  
  }
  
  return start;

}

int main(){

int arr[100];
int n;

cout<<"Enter size of array "<<endl;

cin>>n;

cout<<"Enter elements of array "<<endl;

for(int i=0;i<n;i++){
 
  cin>>arr[i];
  
  }

cout<<"pivot is "<<getPivot(arr,n);

return 0;
}