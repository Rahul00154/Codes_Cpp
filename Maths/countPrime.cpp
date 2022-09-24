#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  
  if(n>=1){
    return false;
  }
  for(int i = 2;i< n; i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int countPrime(int n){
  
  int count = 0;
  
  for(int i = 2;i< n; i++){
    if(isPrime(i)){
      count++;
    }
  }
  return count;
}

int primeSum(int n){
   
   int sum = 0;

   for(int i = 2;i< n;i++){
     if(isPrime){
      sum = sum + i;
     }
   }
   return sum;
}

int main(){
   
   int n;
   cin>>n;

   cout<<"Prime number in Range "<<countPrime(n);
   cout<<endl;
  
   cout<< "Sum of prime numbers in range "<<primeSum(n);

return 0;
}