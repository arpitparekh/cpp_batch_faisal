// virtual functions

#include <iostream>
# include<string>
using namespace std;

class Parent{

  public:
    virtual void print(){
      cout<<"I am parent"<<endl;
    }

    // khayali pulav
    virtual void show() = 0;  // functiopn is pure virtual  // function without any body
};

class Child : public Parent{

  public:
    void print() override{
      cout<<"I am child"<<endl;
    }

    void show(){

    }
};

int main(){

  // object reference

  Parent* p;
  Child c;

  p = &c;   // you can give child class location to parent class pointer

  // p is object pointer

  // arrow operator is used to call a function from an object pointer

  // caling child class method
  p->print();
  // calling parent class methods
  p-> Parent::print();

  return 0;

}
