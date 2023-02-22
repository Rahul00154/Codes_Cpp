#include <bits/stdc++.h>
using namespace std;

void func2(int i,int n){
   if(i > n){
     return;
   }

   func2(i+1,n);

   cout << i << endl; 
}

int main(){
   
   int n;
   cin >> n;

   func2(1,n);

return 0;
}