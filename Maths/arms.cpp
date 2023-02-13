#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Write your code here
  int n;
  cin >> n;
  int m = n;
  int sum = 0;
  int count = 0;
  int temp = n;
  while (temp != 0){
    count++;
    temp = temp / 10;
  }
  while (n != 0){
    int lstDigits = n % 10;
    sum = sum + (lstDigits,count);
    n = n / 10;
  }
  if (sum == m){
    cout << "true";
  }
  else{
    cout << "false";
  }
}
