#include <bits/stdc++.h>
using namespace std;

int pow(int n){
   
   //base case
   if(n==0){
     return 1;
   }
   //recursive realtion
   return 2*pow(n-1);
}

int main(){
    
    int n;
    cin>>n;

    int ans = pow(n);

    cout<<ans<<endl;

return 0;
}