#include <bits/stdc++.h>
using namespace std;


int main(){
   
   string s;

   cin >> s;

   // precompute

   int hash[256] = {0};  //for lower case char we take size of 26

   for(int i = 0; i < s.size(); i++){
       hash[s[i]]++;   //for lower case hash[s[i] - 'a']
   }

   //for taking query to check
   int q;
   cin >> q;
   while(q--){
      char c;
      cin >> c;

      //fetching

      cout << hash[c] << endl;   

   }

return 0;
}