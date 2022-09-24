#include <bits/stdc++.h>
using namespace std;


int main(){

  int num;

 cout<<"Enter nth terms";

cin>>num;

 for(int i=2;i<num;i++){

  int j=2;

  for(;j<i;j++){

    if(i%j==0){

      cout<<"";

      break;

    }
  }
  if(j==i){

    cout<<j<<" ";

  }

 }

return 0;

}