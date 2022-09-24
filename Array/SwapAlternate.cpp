#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size)
{

  for (int i = 0; i < size; i += 2)
  {

    if (i + 1 < size)
    {

      swap(arr[i], arr[i + 1]);
    }
  }
}

void printArray(int arr[], int size)
{

  for (int i = 0; i < size; i++)
  {

    cout << arr[i] << " ";
  }
  cout<<endl;
}

int main()
{

  int n;
  int arr[100];

  cout << "Enter size of array " << endl;

  cin >> n;

  cout << "Enter element of array " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
    swapAlternate(arr, n);

    printArray(arr, n);

  return 0;
}