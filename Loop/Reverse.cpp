#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cout << "Enter number " << endl;

  cin >> n;
  int reverse = 0;
  while (n > 0)
  {

    int lastDigit = n % 10;

    reverse = reverse * 10 + lastDigit;

    n / 10;
  }

  cout << reverse << endl;

  return 0;
}