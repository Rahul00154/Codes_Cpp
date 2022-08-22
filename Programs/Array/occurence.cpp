#include <bits/stdc++.h>
using namespace std;

int countOccurence(int arr[],int size,int key){

   int count = 0;

   for(int i=0;i<size;i++){
    
    if(arr[i]==key)
 
      count++;

   }
   
   return count;

}

int main(){

   int arr[100];
   
   int size;
   
   int key;
   
   cout<<"Enter size of array";
   
   cin>>size;

   cout<<"Enter key "<<endl;
   
    cin>>key;

   cout<<"Enter elements of array "<<endl;
   
    for(int i=0;i<size;i++){

    cin>>arr[i];
   
   }

  cout<< countOccurence(arr,size,key);

return 0;

}