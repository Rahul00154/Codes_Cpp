#include <bits/stdc++.h>
using namespace std;


int main(){
   
   int n;
   cin >> n;
   
   int arr[n];
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }

   //pre compute

   //map<int,int> mpp;
   unordered_map<int,int> mpp;
   
   for(int i = 0; i<n; i++){
       mpp[arr[i]]++;
   }

   int q;
   cin >> q;

   //iterate in the map
   //for(auto it : mpp){
    //   cout<<it.first<<" -> "<<it.second << endl;
   //}

   while(q--){
      
      int number;
      cin >> number;

      cout << mpp[number] << endl;

   }

return 0;
}