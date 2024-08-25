#include<iostream>
#include<string>

using namespace std;

class Circle{

  public:

  float radius = 0;

  void assignValues(float r){
    radius = r;
  }

  void printInfo(){
    cout << "Radius: " << radius << endl;
    }
};

int main(){
  Circle c;

  c.assignValues(10);

  c.printInfo();

  return 0;
}
