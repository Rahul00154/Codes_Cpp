#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int main(){
int n;
cout<<" Enter number n to check Whether it is prime or not"<<endl;
cin>>n;
bool isprime=1;
for(int i=2;i<n;i++){
  if(n%i==0){
    cout<<"Not a prime"<<endl;
    isprime=0;
    break;
  }
}
  if(isprime==0)
{
  cout<<"Not a prime"<<endl;
}

else{
  cout<<"is a prime"<<endl;
}

}
