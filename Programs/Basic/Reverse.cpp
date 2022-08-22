#include <bits/stdc++.h>
using namespace std;


int main(){

int num,rem;
int sum=0;
cout<<"Enter Number ";
cin>>num;
while(num!=0){
  rem=num%10;   //882%10=2,//88%10=8;8%10=8
  sum=sum*10+rem;  //0*10+2=2;//2*10+8=28;28*10+8=288
  num=num/10;   //882/10=88;88/10=8;8/10=0
}
cout<<"Reverse  is "<<sum;

return 0;
}