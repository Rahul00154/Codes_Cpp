#include <bits/stdc++.h>
using namespace std;


int main(){
 int n;
 cout<<"Enter Your Number";
 cin>>n;
  int i=2;
  bool divided=false;
 while(i<n){
  if(n%i==0){
    
    cout<<"Non prime number";
    
    divided=true;
  }
  i=i++;

 }
 if(!divided){
   cout<<"Prime Number";
 }

return 0;
}