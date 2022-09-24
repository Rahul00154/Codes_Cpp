#include <bits/stdc++.h>
using namespace std;
/*
int getSum(int *arr,int n){

   int sum = 0;
   for(int i=0;i<n;i++){
     sum = sum + arr[i];
   }
   return sum;
}

int main(){

   int n;
   cin>> n;

   //variable size arrays
   int* arr = new int[n];

   for(int i = 0; i<n; i++){
    cin >> arr[i];
   }

   int ans = getSum(arr,n);

   cout<< "Sum is "<<ans<<endl;

return 0;
} */

int main(){
    
    int row;
    cin >> row;
    int col;
    cin>>col;
    
    // creating a 2D array
    int **arr = new int *[row];
    for(int i=0;i<row;i++){
       arr[i]= new int[col];
}
    //taking input
    for(int i=0;i<row;i++){

       for(int j=0;j<col;j++){
      
         cin>>arr[i][j];
      
       }
    
    }

    //printing output
    cout<<endl;
    for(int i=0;i<row;i++){

       for(int j=0;j<col;j++){

         cout<<arr[i][j] <<" ";
       }
       cout<<endl;
    }

    //releaing memory
    for(int i=0;i<row;i++){
     
      delete [] arr[i];

    }
    delete [] arr;
    
    return 0;
}