#include <bits/stdc++.h>
using namespace std;

void update2(int &n){
    n = n + 1;
}

void update1(int n){
    n = n+1;
}

int main(){
    /*
    int i = 5;
    //create a ref variable
    int &j = i;
    cout<< i << endl;
    i++;
    cout<< i <<endl;
    j++;
    cout<< i <<endl;
    cout<< j <<endl;
    */

    int n = 6;

    cout<<"Before " << n <<endl;
    update1(n);
    cout<<"After " << n <<endl;
    update2(n);
    cout<<" After Reference "<< n <<endl;

return 0;
}