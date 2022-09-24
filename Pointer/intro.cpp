#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int num = 5;

    //address of Operator -> &

    cout<<" Address of num is "<< &num << endl;
    //Pointer -> Store Address of data type

    int *ptr = &num;

    //int *ptr -> ptr is pointer to int data type
    //Here * is dereference operator

    cout<< "Address is : "<< ptr <<endl;
    cout<< "Value is : " << *ptr <<endl; 

    //*ptr -> value at address pointed by p
    
    double d = 4.3;
    double *p2 = &d;

    cout<< "Address is " << p2 <<endl;
    cout<< "Value is " << *p2 <<endl;

    cout<<"Size of integer is : " << sizeof(num)<<endl;

    cout<<"Size of pointer is : "<<sizeof(ptr)<<endl;
    
    cout<<"Size of pointer is : "<<sizeof(p2)<<endl;

return 0;
}