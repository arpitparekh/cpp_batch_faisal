#include<iostream>
#include<string>
using namespace std;

class Fun{
  // properties // varaibles
  // methods
  // constructors
  // static members

  public:
    int a = 12;  // properties
    static int b;  // static members
    // class members
    // static variable is not a part of an object
    // static variable is a part of a class
    // static variable shared their value among all the objects

    // static functions
    // static functions can access static members only

    static void printInfo(){                 // used to create a utility class
      cout << "Static function" << endl;
    }

};

int Fun::b = 13;  // you have to declare and initialze it outside of main method

int main(){

  Fun f;
  Fun f1;
  Fun f2;

  cout << f.a << endl;
  cout << f1.a << endl;
  cout << f2.a << endl;

  Fun::b = 14;

  cout << Fun::b << endl;

  cout << f.b << endl;
  cout << f1.b << endl;
  cout << f2.b << endl;

    Fun::b = 15;

  cout << f.b << endl;
  cout << f1.b << endl;
  cout << f2.b << endl;

  Fun::printInfo();

  return 0;

}
