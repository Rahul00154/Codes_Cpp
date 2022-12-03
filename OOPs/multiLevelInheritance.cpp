#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
  int age;
  int weight;

public:
  void speak()
  {
    cout << " Speaking " << endl;
  }
};

class Dog : public Animal
{
   
};

class Germansepherd: public Dog{

};


int main()
{
  Germansepherd g;

  g.speak();
  
  return 0;
}