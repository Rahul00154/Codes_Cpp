#include <bits/stdc++.h>
using namespace std;

void updateArray(int array[], int n)
{

  cout << "Printing Array Inside update function " << endl;
  
  array[0] = {30};
  
  for (int i = 0; i < n; i++)
  
  {

    cout << array[i] << " ";
  
  }

  cout << endl;

}

int main()
{
  int array[5] = {0, 1, 2, 3, 4};
  
  updateArray(array, 5);
  
   cout << "Printing array in main function " << endl;
  
  for (int i = 0; i < 5; i++)
  {
  
    cout << array[i] << " ";
  }

  cout << endl;

  return 0;
}