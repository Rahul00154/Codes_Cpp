#include<bits/stdc++.h>
using namespace std;


vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
  // Write your code here.
  sort(arr.begin(), arr.end());
  vector<int> ans;
  ans.push_back(k - 1);
  ans.push_back(n - k);
  return ans;
}
