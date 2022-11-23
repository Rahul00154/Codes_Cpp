#include <bits/stdc++.h>
using namespace std;


class Hero{

  //properties
  private:
  int health;
  public:
  char level;

  Hero(){
     cout<<"constructor called"<<endl;
  }

  //parameterised constructor

  Hero(int health){
    //cout<<this<<endl;
    this->health = health; 
  }

  Hero(int health, char level){
    this->level = level;
    this->health = health;
  }

  void print(){
    cout<< level << endl;
  }
  
  int getHealth() { 
    return health;
    }

  char getLevel() { 
    return level;
    }

  void setHealth(int h){
    health = h;
  }  
  void setLevel(char ch){
    level  = ch;
  }

};

int main(){
    


   // cout<<"Hi"<<endl;
    //object created statically
    Hero ramesh(10);
    cout<<"Address of ramesh"<<&ramesh<<endl;
    //object created dynamically
    Hero *h = new Hero();










    //cout<<"Hello"<<endl;
    /*
    //static
    Hero a;

    cout<<"Level"<<a.level<<endl;
    cout<<"Health "<<a.getHealth()<<endl;

    //dynamic
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health Is : "<<(*b).getHealth()<<endl;

    cout<<"Level is: "<<b->level<<endl;
    cout<<"Health Is : "<<b->getHealth()<<endl;

    
    /*
    //creation of object
    Hero rahul;
    cout<<"Rahul's Health is "<<rahul.getHealth()<<endl;
    
    //use setter
    rahul.setHealth(70);
    rahul.level = 'A';

    cout<<"Health Is: "<<rahul.getHealth()<<endl;
    cout<<"Level Is: "<<rahul.level<<endl;

    //cout<<"size "<<sizeof(h1)<<endl;
    */

  return 0;
}