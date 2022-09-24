#include <bits/stdc++.h>
using namespace std;

void update(int **p){
     
    // p = p+1;

    // *p = *p + 1; 

       **p = **p + 1;
     
}
int main(){
    
    /* int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

   /* cout <<"Printing P " <<ptr<<endl;
    cout<<"Adddress of  p "<<&ptr<<endl;


    cout<<*ptr2<<endl;

    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;

    cout<<&ptr<<endl;
    cout<<ptr2<<endl;

    

   cout<<endl<<endl;

   cout<<"before "<< i <<endl;
   cout<<"Befor "<< ptr <<endl;
   cout<<"Before "<< ptr2 <<endl;
   update(ptr2);

   cout<<"After "<< i <<endl;
   cout<<"After "<< ptr <<endl;
   cout<<"After "<< ptr2 <<endl;

   */
  int first  = 8;
  int second = 18;
  int *ptr = &second;
  *ptr = 9;

  cout<< first << " " << second <<endl;

return 0;
}