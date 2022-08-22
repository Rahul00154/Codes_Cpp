#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int> &v){

  cout<<"Size "<<v.size()<<" "<<endl;

  for(int i=0; i<v.size(); i++){

    cout<<v[i]<<" " ;//for accessing value in vector

  }

  cout<<endl;

  v.push_back(2);

}
int main(){
   
   vector <int> v(10,3);
   
   v.push_back(7);
   
   printVector(v);
   
   v.pop_back();//array ka last element nikalta hai
   
   printVector(v);
   
   vector<int> &v2=v; //actual vector passes through reference 
   
   //v2=v //O(N) //in vector we can directly copy vector 
   
   v2.push_back(5);
   
   printVector(v);

   printVector(v2);
   
   vector<string> v3;
   int size_2;

   cout<<" Enter size"<<endl;
   cin>>size_2;

   for(int i=0;i<size_2;i++){
    string s;
    cin>>s;
    v3.push_back(s);
   }
  int size;

  cin>>size;

  for(int i=0; i<size; i++){
    int x;
    cin>>x;
     printVector(v);
     v.push_back(x);
    
  }
  printVector(v);

}