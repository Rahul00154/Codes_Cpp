#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int> v;
  for(int i=0 ;i<6 ;i++){
    v.push_back(i);
    //or we can use emplace_back to pudh the element in vector
    v.emplace_back(i);
  }
  cout<<"vector is :";
  for(vector<int>::iterator it = v.begin() ; it != v.end() ;++it){
    cout<<*it;
    cout<<endl;
  }

}