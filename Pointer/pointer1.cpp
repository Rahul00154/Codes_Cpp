#include<iostream>
using namespace std;

int main(){
    
    int num[5];
    int *p;
    p = num;
    *p = 10;
    p = &num[2];
    *p = 20;
    p--;
    *p = 30;
    p = num+3;
    *p = 40;
    p = num;
    *(p+4) = 50;

    for(int n = 0; n<5; n++){

       cout<< num[n] <<" , ";

    }

    return 0;

}