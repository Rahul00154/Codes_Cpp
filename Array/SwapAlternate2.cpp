#include <bits/stdc++.h>
using namespace std;


int main(){

int n, arr[100],temp,i;

cout<<"Enter size of array"<<endl;

cin>>n;

cout<<"Enter elements in array"<<endl;

for( i=0; i<n; i++){

  cin>>arr[i];

}

i=0;
//Logic to swap array elements
while(i<n-1){

  temp=arr[i];

  arr[i]=arr[i+1];

  arr[i+1]=temp;

  i+=2;
}

cout<<"array after swapping : "<<endl;

for(i=0;i<n;i++){

  cout<<arr[i]<<" ";

}

return 0;

}