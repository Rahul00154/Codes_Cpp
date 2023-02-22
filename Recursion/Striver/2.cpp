#include <bits/stdc++.h>
using namespace std;

void func1(int i,int n){
   
   if(i<1){
     return;
   }

   cout << i << endl;
   func1(i-1,n);
   
}

int main(){
   int n;

   cin >> n;

   func1(n,n);

return 0;
}