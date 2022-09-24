#include <bits/stdc++.h>
using namespace std;


int main(){
 int num,rem,sum=0;
 cout<<"Enter Number";
 cin>>num;
 
 while(num!=0){
  rem=num%10;
  sum=sum+rem;
  num=num/10;
 }
 cout<<"Digit sum is "<<sum;

return 0;
}