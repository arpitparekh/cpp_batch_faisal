#include<iostream>
#include<string>

using namespace std;


class Sir{

  public:

  void greet(){
    cout << "Hello Sir" << endl;
  }
};

class Student : public Sir{

  public:

  void greet(){
    cout << "Hello Student" << endl;
  }
};

int main(){
  Student s;
  s.greet();

  return 0;
}
