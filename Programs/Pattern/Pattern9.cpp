#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char start='A';
  int row=1;
  while(row<=n)
  {int col=1;
    while (col<=n )
    {
      cout<<start;
      start=start+1;
      col=col+1;
    }
    cout<<endl;
    row++;
  }
  return 0;
}