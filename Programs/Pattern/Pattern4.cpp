#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int row=1;
  int toprint=1;

  while(row<=n){
    toprint=row;
    int col=1;
    while(col<=row){
      cout<<toprint<<" ";
      toprint=toprint+1;
      col=col+1;

    }
    cout<<endl;
    row=row+1;
  }
  return 0;
}