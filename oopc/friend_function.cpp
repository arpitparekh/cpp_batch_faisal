#include<iostream>
#include<string>

using namespace std;

// A friend class can access private and protected members of other classes in which it is declared as friend.

class A{
  private :
    int a;
  protected :
    int b;
  public :
    A(int a,int b){
      this->a = a;
      this->b = b;
    }

    friend void myFunction(A &obj);  // you have to create friend function first

    void display(){
      cout << a << endl;
      cout << b << endl;
    }
};


void myFunction(A &obj){   // you can access all the private and protected members like this
  obj.a = 100;
  obj.b = 200;
}

int main(){

  A obj(10,20);

  obj.display();

  myFunction(obj);

  obj.display();

  return 0;
}
