#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int> v;
  for(int i=0 ;i<6 ;i++){
    v.push_back(i);
  }
  cout<<"vector is :";
  for(vector<int>::iterator it = v.begin() ; it != v.end() ;++it){
    cout<<*it;
    cout<<' \n '; 
  }

}