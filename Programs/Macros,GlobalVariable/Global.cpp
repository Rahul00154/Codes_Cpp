#include <bits/stdc++.h>
using namespace std;

int score = 50;

void a (int& i ){
   
    cout<<score<<"In A"<<endl;
    score++;
    char ch = 'a';
    cout<<i<<endl;

}

void b(int &i){

    cout<<score<<"In B"<<endl;
    cout<<i<<endl;

}

int main(){
    
    cout<<score<<"In main func"<<endl;
    int i = 6;
    a(i);
    b(i);

return 0;
}