#include <bits/stdc++.h>
using namespace std;


class Hero{

  //properties
  private:
  int health;
  public:
  char level;
  char* name;
  static int timeToComplete;

  Hero(){
     cout<<"constructor called"<<endl;
     name = new char[100];
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

  //copy Constructor
  /*
  Hero(Hero& temp){
    cout<<"Copy constructor called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
  } */

  void print(){

    cout<< " [";
    cout<<"Name: "<<this->name<<" ,";
    cout<<" level " <<this->level<< " ,";
    cout<<"Health "<<this->health<< " ]";
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
  void setName(char name[]){
      strcpy(this->name,name);
  }
  static int random(){
     return timeToComplete;
  }

  ~Hero(){
    cout<<"Destructor Called"<<endl; 
  }

};
int Hero::timeToComplete = 5;

int main(){
    
    cout<<Hero::timeToComplete<<endl;
    
    cout<<Hero::random()<<endl;

    /*
    //static 
    Hero a;

    //dynamic
    Hero *b = new Hero();
    //manual destructor call
    delete b;




    /*
    Hero hero1;
    hero1.setHealth(14);
    hero1.setLevel('E');
    char name[6] = "Rahul";
    
    hero1.setName(name);
    //hero1.print();

    //use default copy constructor

    Hero hero2(hero1);
    //hero2.print();
    //Hero hero2 = hero1;
    hero1.name[0] = 'A';
    hero1.print();

    hero2.print();
    hero1 = hero2;
    hero1.print();
    hero2.print();
    
    
    
    
    
    /*
    Hero S(70,'C');
    S.print();
    //copy constructorz 
    Hero R(S);
    R.print();















   // cout<<"Hi"<<endl;
    //object created statically
    //Hero ramesh(10);
    //cout<<"Address of ramesh"<<&ramesh<<endl;
    //ramesh.print();
    //object created dynamically
    //Hero *h = new Hero();
    //h->print();

    //Hero temp(22,'A');
    //temp.print();










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