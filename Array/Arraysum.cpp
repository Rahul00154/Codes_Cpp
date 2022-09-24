#include <bits/stdc++.h>
using namespace std;

int Array_Sum(int arr[], int size)
{

  int sum = 0;

  for (int i = 0; i < size; i++)
  {

    sum += arr[i];
  }

  return sum;
}

int main()
{

  int n;

  cout << "Enter size of array " << endl;

  cin >> n;

  int arr[100];

  cout << "Enter Element of array " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = Array_Sum(arr, n);

  cout << "Sum is " << ans;

  return 0;
}