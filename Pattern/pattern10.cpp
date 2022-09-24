#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main(){
 int n;
 cin>>n;
 int row=1;
  while(row<=n)
  { int col=1;
    while(col<=n)
    { 
      cout<<char('A'+row+col-2);
      col=col+1;
    }
    row=row+1;
    cout<<endl;
  }
return 0;
}
