#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
  //pair is used to maintain relation between two things
  pair<int,string> p;
  //initialization of pair
  // 1st Method
 // p=make_pair(2,"abc"); 
 //2nd Method
   p={2,"abcd"};
   pair<int,string> &p1=p;
   p1.first=4;
  cout<<p.first<<" "<<p.second<<endl;
   
   int a[]={1,2,3};
   int b[]={2,3,4};
   pair<int,int> p_array[3];
   p_array[0]={1,2};
   p_array[1]={2,3};
   p_array[2]={3,4};
   swap(p_array[0],p_array[2]);
   for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }

  vector <int> v;
  //it is array of dynamic size
  cout<<"Size -->"<<v.capacity()<<endl;
  v.push_back(1);//jo bhi value pushback ko provide krte wo end me jod deta hai
  cout<<"Capacity -->"<<v.capacity()<<endl;
  v.push_back(2);
  v.push_back(3);
  cout<<"capacity -->"<<v.capacity()<<endl;
  cout<<"capacity -->"<<v.capacity()<<endl;
  //time complexity O(1)
  cout<<"size"<<v.size()<<endl;
  cout<<"Element at 2nd index "<<v.at(2)<<endl;
  
}