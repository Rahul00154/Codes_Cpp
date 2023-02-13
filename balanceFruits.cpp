#include<iostream>
using namespace std;

int  main(){
   
   int a, m, rs;
   int r;
   cout << "Enter the apple"<<endl;
   cin >> a;

   cout << "Enter the mango" << endl;
   cin >> m;

   cout << "Enter Rupeees" << endl;
   cin >> rs;

   if(a > m){
      m = a - m;

      r = m*1;
      cout << "balance is " << rs - r << endl;
   } else 
       m = m-a;
       r = m*1;
       cout<<" Balance is "<< rs-r ;
   

   return 0;
}