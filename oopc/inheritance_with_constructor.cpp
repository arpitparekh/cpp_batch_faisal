#include<iostream>
#include<string>

using namespace std;

class GrandParent{
  public:
    string name;
    int age;

    GrandParent(){
      cout << "GrandParent constructor is called" << endl;
    }
};

class Parent : public GrandParent{

  public:
  Parent(int a){   // parameterized constructor
    cout << "Parent constructor is called " << a << endl;
  }

};

class Child : public Parent{

  public:
  Child(int a) : Parent(a){  // explicitly call parent class parameterized constructor
    cout<<"Child constructor is called" << endl;
  }
};

int main(){
  Child c(12);

  // constrcutor chaining
  // child class constrcutor always call parent class default constrcutor

  // multi level inheritance (today)
  // single inheritance (yesterday)

  return 0;
}
