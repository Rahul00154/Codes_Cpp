#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
  int n;
  cout << "Enter number n";
  cin >> n;
  /*int i=1;
 for(;i<=n; ){
  cout<<i<<endl;
 i++;
 }
 return 0;} */
  /*for(; ;){
    if(i<=n){
      cout<<i<<endl;
    }
    else{
      break;
    }
    i++;
  }

  }*/
  for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
  {
    cout << a << " " << b << " " << c << endl;
  }
}