#include<iostream>
#include<string>

using namespace std;

class DemoClass{

  public:
    int a;
    int b;

    DemoClass(){
      cout << "Constructor is called" << endl;
    }

    DemoClass(int a,int b){
      this->a = a;
      this->b = b;
    }

    DemoClass(DemoClass &obj){   // copy constrcutor
      this->a = obj.a;
      this->b = obj.b;
    }


    void display(){
      cout << a << endl;
      cout << b << endl;
    }
};


int main()
{

  DemoClass d1(10,12);
  d1.display();

  DemoClass d2 = d1;   //this is a way to make a copy of an object
  d2.display();

  DemoClass d3(d2);
  d3.display();

  return 0;
}
