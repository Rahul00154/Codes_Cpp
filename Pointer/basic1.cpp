#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int first = 6,second = 9;
    char third = 'c';
    int *p1,*p2;
    char *p3;
    p1 =&first; //address of first value 
    p2 = &second; //address of second value
    p3 = &third;
    
    *p1 = 10;
    *p2 = 11;
    *p3 = 'b';
    
return 0;
}