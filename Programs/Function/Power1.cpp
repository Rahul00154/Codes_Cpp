#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int power()
{
  int a, b;
  
  cin >> a >> b;
  
  int ans = 1;
  
  for (int i = 1; i <= b; i++)
  {
  
    ans = ans * a;
  
  }
  
  return ans;
}
int main()
{

  
  int answer = power();
  
  cout << "power is " << answer;
  
  return 0;
}
