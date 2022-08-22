#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
  int a, b;
  cin >> a >> b;
  int res = 1;
  for (int i = 1; i <= b; i++)
  {
    res = res * a;
  }
  cout << "power of " << a << " and " << b << " = " << res;

  return 0;
}
