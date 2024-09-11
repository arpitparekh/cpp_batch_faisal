// interface is a type of abstract class with only pure virtual functions

#include <iostream>
#include <string>

using namespace std;

class Utility{  // interface

  public:
  virtual void printInfo() = 0;
  virtual void showInfo() = 0;
  virtual void show() = 0;
  virtual void print() = 0;

};

class Parent : public Utility{

  public:
  void printInfo(){
    cout << "I am parent" << endl;
  }
  void showInfo(){
    cout << "I am parent" << endl;
  }
  void show(){
    cout << "I am parent" << endl;
  }
  void print(){
    cout << "I am parent" << endl;
  }
};

int main(){

  // Utility p;  // can't do thta man!

  Parent p;

  p.printInfo();
  p.showInfo();
  p.show();
  p.print();

  return 0;
}
