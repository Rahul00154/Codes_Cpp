#include <bits/stdc++.h>
using namespace std;

void reverse(string &str,int i,int j){
    
    cout<<"Call received for "<<str<<endl;
    //basse case
    if(i>j){
       return;
    }
    swap(str[i],str[j]);
    
    //recursive call
    reverse(str,i+1,j-1);

}

int main(){
    
    string name = "rahul";
    cout<<endl;
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;

return 0;
}