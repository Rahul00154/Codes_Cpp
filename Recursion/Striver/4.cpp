#include <bits/stdc++.h>
using namespace std;

void seq(int i, int sum){
   if(i<1){
     cout<< sum <<endl;
      return;
   }

   seq(i-1,sum+i);
}

int main(){
   
   int n;
   cin >> n;

   seq(n,0);

return 0;
}