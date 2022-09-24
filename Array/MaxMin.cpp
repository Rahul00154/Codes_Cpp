#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int size)
{
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}
int getMin(int arr[], int size)
{
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}
int main()
{

  int n, arr[100];

  cout << "Enter size of array " << endl;

  cin >> n;

  cout << "elements in array is : " << endl;

  // taking input in array

  for (int i = 0; i < n; i++)
  {

    cin >> arr[i];
  }
  cout << "Maximum value is " << getMax(arr, n) << endl;
  
  cout << "Minimum value is " << getMin(arr, n) << endl;
  
  return 0;
}