#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num[15];
  // accessing an array
  cout << "value at 14 index " << num[14] << endl;

  // initializing an array
  int sec[3] = {5, 6, 11};
  cout << "value at 2nd index " << sec[2] << endl;
  // printing element of array
  int third[15] = {2, 7};
  int n = 15;
  cout << "Printing an array " << endl;
  // print the array
  for (int i = 0; i < n; i++)
  {
    cout << third[i] << " ";
  }
  // initializing all location with zero
  int forth[10] = {0};
  n = 10;
  /*cout<<"printing the array "<<endl;
  for(int2 i=0;i<n;i++){
    cout<<forth[i]<<" ";
  }*/
 
  return 0;
}
// creating function for printing array
/*array is accessed by function through
 passing the array and its size*/
void printArray(int array[], int size)
{
  cout << "Printing the array " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << "PrintinG Done ";
}
