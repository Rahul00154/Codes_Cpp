
//Euclid Algorithm

#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
   if(x== 0){
    return y;
   }
   if(y==0)
    return x;

    while(x!=y){
      if(x>y){
        x = x-y;
      }
      else
        y=y-x;
    }
    return x;
}

int lcm(int a , int b){

     return a*b/gcd(a,b);  
}

int main(){
   int a,b;
   
   cout<<"Enter The value of a and b "<<endl;
   cin>> a >> b;

   int ans = gcd(a,b);
   
   cout<<"The Gcd of "<< a <<" & "<<b<<" is "<<ans;

return 0;
}