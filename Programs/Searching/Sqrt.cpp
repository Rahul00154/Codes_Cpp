#include <bits/stdc++.h>
using namespace std;

long long int binarySearch(int n){
  int s=0;

  int e=n;

  long long int mid= s+(e-s)/2;
  
  long long int ans=-1;;
  while(s<=e){
   
   if(mid*mid>n){
     e=mid-1;
   }
   if(mid*mid<n){
     ans=mid;
     s=mid+1;
   }
   else if(mid*mid==n){
     return mid;
   }
   mid= s+(e-s)/2;
  }
  return ans;
}

int main(){


return 0;
}