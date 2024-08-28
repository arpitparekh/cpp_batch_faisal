#include<iostream>
#include<string>

using namespace std;

class Circle{

  public:
    double radius;

    Circle(double radius){
      this->radius = radius;
    }

    void printInfo(){
      cout << "Radius: " << radius << endl;
    }

    ~Circle(){   // garbage collection
      cout << "Destructor is called" << endl;
    }
};

int main(){

  Circle c(12);
  Circle c1(10);

  c.printInfo();
  c1.printInfo();

  return 0;
}
