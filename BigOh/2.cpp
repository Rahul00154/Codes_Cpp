#include <bits/stdc++.h>

using namespace std;



void findFourSum(int arr[], int n, int X)
{

  

  unordered_map<int, pair<int, int>> map;

  for (int i = 0; i < n - 1; i++)

    for (int j = i + 1; j < n; j++)

      map[arr[i] + arr[j]] = {i, j};

  
  for (int i = 0; i < n - 1; i++)
  {

    for (int j = i + 1; j < n; j++)
    {

      int sum = arr[i] + arr[j];



      if (map.find(X - sum) != map.end())
      {

        

        pair<int, int> p = map[X - sum];

        if (p.first != i && p.first != j

            && p.second != i && p.second != j)
        {

          cout << arr[i] << " " << arr[j] << " "

               << arr[p.first] << " "

               << arr[p.second];

          return;
        }
      }
    }
  }
}



int main()
{

  int arr[100] ;

  int size;

  int target;
  cin>>size;
  for(int i =0;i<size;i++){
     cin>>arr[i];
  }
  cin>>target;
  
  findFourSum(arr, size, target);

  return 0;
}
