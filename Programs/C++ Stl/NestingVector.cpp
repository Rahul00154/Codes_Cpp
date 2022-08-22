#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>  &v){

  cout<<"size "<<v.size()<<endl;

  for(int i=0; i<v.size();i++)
  {
    cout<<v[i].first<<" "<<v[i].second <<" "<<endl;
  }
  
}
int main(){
 // vector<pair<int,int> > v;
  //printVector(v);
  /*int size;
 // cin>>size;
  for(int i=0;i<size;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y}); 
    // second method to send element in vector v.pushback(make_pair(x,y));
   */
  int n;
  cin>>n;
  vector<int> v[n];
  for(int i=0; i<n; i++){

    int N;
    for(int j=0;j<N; j++){
      int x;
      cin>>x;
      v[i].push_back(x);
    }   
  }
    for(int i=0;i<n; i++){
      printVector(v[i]);
    }

  


}