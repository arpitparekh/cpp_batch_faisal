// multiple inheritance in c++

#include <iostream>
#include <string>
using namespace std;

class A{
  public:

  void greet(){
    cout << "Hello from A" << endl;
  }
};

class B{
  public:

  void greet(){
    cout << "Hello from B" << endl;
  }
};

class C : public A, public B{  // child with 2 parent  // multiple inheritance

};

int main(){

  C c;
  B().greet();
  A().greet();
  return 0;
}
