#include <bits/stdc++.h>
using namespace std;

void dummy(int n) //this function make copy of n
{
  n++;
  cout << "n is " << n << endl;
}
int main()
{
  int n;
  cin >> n;
  dummy(n); // function call
  cout << "Number is " << n << endl;
  return 0;
}
