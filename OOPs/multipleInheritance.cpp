#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
  int age;
  int weight;

public:
  void bark()
  {
    cout << " barking " << endl;
  }

};

class Human{
  public:
  string color;
  public:
  void speak(){
     cout<<" Speaking "<<endl;
  }
};

class Hybrid: public Animal,public Human{
    
};



int main()
{
   Hybrid obj;

  obj.speak();
  obj.bark();

  return 0;
}