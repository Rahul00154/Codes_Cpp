#include <bits/stdc++.h>
using namespace std;


int main(){

int year;

cout<<"Enter year To check It is Leap Year Or Not "<<endl;

cin >> year;

if(year>=2000||year<=2022)
{
  if(year%4==0 && year%400==0 && year%100==0)
  {
    cout<< year <<" is a leap year "<<endl;
  }
  else if(year%4==0 && year%400!=0 && year%100==0){
    cout<< year <<" is not a leap year "<<endl;
  }
}

return 0;

}