#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key)
{

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
  }
  return 0;
}

int main()
{

  int n;

  cout << "Enter size of array" << endl;

  cin >> n;

  int arr[10];

  cout << "Enter element of array" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;

  cin >> key;

  bool found = search(arr, n, key);

  if (found)
  {
    cout << "key is present";
  }
  else
  {
    cout << "Key is absent";
  }
  return 0;
}