#include <bits/stdc++.h>
using namespace std;
/*
void fact(int i , int multp){ //parameterized Recursion
   if(i<=1){
     cout << multp;
      return;
   }

   fact(i-1,multp*i);  
}



*/
int fact(int n){

   if(n<=1){
      return 1;
   }
  
   return n * fact(n-1);

}
int main(){
   
   int n;

   cin >> n;

   cout << fact(n);

return 0;
}