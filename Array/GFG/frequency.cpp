#include <bits/stdc++.h>
using namespace std;

void frquency(int arr[], int n)
{
  int fre[4];
  int k = 0;
  for (int i = 0; i < n; i++)
  {
    int count = 1;
    int j;
    for (j = 0; j < n; j++)
    {
      if (i == j)
        continue;

      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (j == n)
    {
      fre[k] = count;
      k++;
    }
  }
  for (int i = 0; i < k; i++)
  {
    cout << fre[i] << " ";
  }
}

int main()
{

  int arr[7] = {10, 0, 10, 0, 0, 20, 30};
  frquency(arr, 7);
  return 0;
}