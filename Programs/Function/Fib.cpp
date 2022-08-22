#include <bits/stdc++.h>
using namespace std;
void fib(int n)
{
  int a = 0, b = 1;
  cout << a << " " << b << " ";
  for (int i = 1; i <= n; i++)
  {
    int fib = a + b;
    cout << fib << " ";
    a = b;
    b = fib;
  }
}

int main()
{
  int n;
  cin >> n;
  fib(n);
  return 0;
}
