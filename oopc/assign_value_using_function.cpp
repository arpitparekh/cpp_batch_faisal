#include<iostream>
#include<string>

using namespace std;

class Circle{

  public:

  float radius = 0;
  void assignValues(float r){
    radius = r;
  }

  void findPerimeter(){
    cout << "Perimeter: " << 2 * 3.14 * radius << endl;
  }

  void findArea(){
    cout << "Area: " << 3.14 * radius * radius << endl;
  }

  void printInfo(){
    cout << "Radius: " << radius << endl;
  }

};

int main(){

  Circle c;

  c.assignValues(10);
  c.printInfo();
  c.findPerimeter();
  c.findArea();



  return 0;

}
