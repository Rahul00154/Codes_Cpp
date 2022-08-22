#include <bits/stdc++.h>
using namespace std;
// 0->not a prime
// 1->is a prime
bool isPrime(int n)
{
  for (int i = 2; i < n; i++)
  {
   
    if (n % i == 0)
   
    {
      
      return 0; // not a prime
    
    }
  
  }
  return 1; // is a prime
}

int main()
{
  int n;
 
  cin >> n;
 
  if (isPrime(n))
  {
    
    cout << "Is a prime no." << endl;
  
  }
  
  else
  
  cout << "Not a prime." << endl;
  
  return 0;

}
