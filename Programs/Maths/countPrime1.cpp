
//sieve of Eratosthenes

#include <bits/stdc++.h>
using namespace std;

int countPrime(int n){
  int count = 0;
  vector<bool> prime(n+1,true);
  
  prime[0]=prime[1]=false;

  for(int i = 2;i< n; i++){
    if(prime[i]){
      count++;
      for(int j = 2*i;j < n;j+=i){
         prime[j]=0;
      }
    }
  }
  return count;
}

int main(){
   int n;

   cout<<" Enter the number";
   cin>>n;
   
   int ans = countPrime(n);
   cout<<"Prime number till "<<n<<" is "<<ans;
return 0;
}