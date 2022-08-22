#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main(){
   int n;
   cin>>n;
   int a=0;
   int b=1;
   cout<<a<<" "<<b<<" ";
   for(int i=1;i<=n;i++){
    int fib=a+b;
    cout<<fib<<" ";
    a=b;
    b=fib;
   }
return 0;
}
