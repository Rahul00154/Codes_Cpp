#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){
   
   for(int row = 0; row<3; row++){
      for(int col = 0; col<4; col++){
         if(arr[row][col] == target){
            return 1;
         }
      }
   }
   return 0;
}

//To print row wise sum
void printSum(int arr[][4],int row , int col){
   cout<<"Printing sum";
   for(int row =0; row<3; row++){
      int sum = 0;
      for(int col =0; col<4; col++){
        sum = sum + arr[row][col];
      }
      cout<<sum<<" ";
   }
   cout<<endl;
}

int largestRowSum(int arr[][4],int row , int col){
   
   int max= INT_MIN;
   int rowIndex = -1;

   for(int row=0;row<3; row++){
      int sum = 0;
      
      for(int col=0;col<4; col++){
         sum = sum + arr[row][col];
      }

      if(sum > max){
         max = sum;
         rowIndex = row;
      }

   }
   cout<<"The maximum sum is "<<max<<endl;
   return rowIndex;
}

int main(){
   
    //create 2D array

    int arr[3][4];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,12,176};
    
    //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    
    cout<<"Enter the elements "<<endl;
    
    //taking input -> row wise

   for(int row=0; row<3; row++){

       for(int col=0; col<4; col++){

          cin>>arr[row][col];
          
       }
       
    } 

    //take input -> column wise

   /* for(int col=0; col<4; col++){
       for(int row=0; row<3; row++){
          cin>>arr[col][row];
       }
    }
         */

    //print

   cout<<"Printing Array ";

    for(int row=0; row<3; row++){
       for(int col=0; col<4; col++){
        cout<<arr[row][col]<<" ";
       }
       cout<<endl;
    }
   
    int target;
    cout<<"Enter the element to search"<<endl;
    cin>>target;

    if(isPresent(arr,target,3,4)){
      cout<<"Element found"<< endl;
    }
    else
    cout<<"No element found"<<endl;
    
    printSum(arr,3,4);
    int ans = largestRowSum(arr,3,4);
    cout<<" largestRowSum index is "<<ans<<endl;

return 0;
}