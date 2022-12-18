#include <bits/stdc++.h>
using namespace std;
//function starts here
int min(int arr[], int n)
{
    int a = 0;
    while (1)
    {
        int noofzeros = 0;
        int i;

        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1) // checking  for odd num
                break;
            else if (arr[i] == 0) // checking for zeroes in array
                noofzeros++;
        }

        if (noofzeros == n)
            return a; // if every element is zero return the final value

        if (i == n) // at last if all elements are even
        {
            for (int j = 0; j < n; j++)
            {
                arr[j] = arr[j] / 2;
            }
            a++;
        }
        // for odd values making them even by decrement by 1
        for (int z = 0; z < n; z++)
        {
            if (arr[z] % 2 == 1)
            {
                arr[z]--;
                a++;
            }
        }
    }
}
int main()
{
    int arr[1000];
    int count = 0, i = 0;
    // taking inputs from console
    while (1)
    {
        cin >> arr[i];
        if (cin.get() == '\n')
        {
            break;
        }
        i++;
        count++;
    }
    int n = count + 1; // length of the array

    // calling function as output
    cout << min(arr, n);

    return 0;
}
