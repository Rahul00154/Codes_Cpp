#include <bits/stdc++.h>
using namespace std;

void duplicate_element(int arr[],int n)
{
  for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
    
      if(arr[i]==arr[j]){
    
       cout<<"Duplicate exists at "<<i<<endl;
    
       return;
    
      }
    
    }
  
  }

}
//Time complexity O(n*n)

int main() {

int arr[100];
int n;

cout<<"Enter size of array"<<endl;

cin>>n;

cout<<"Enter elements of array"<<endl;

for(int i=0;i< n;i++){

  cin>>arr[i];
}

duplicate_element(arr,n);

return 0;
}