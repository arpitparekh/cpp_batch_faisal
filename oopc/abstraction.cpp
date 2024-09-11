// abstraction
// abstraction means to hide the implementation details
// and show only the necessary details to the user

// provide implementation to another class

// you can not create an object of an abstract

#include<iostream>
#include<string>
using namespace std;


class Vehicle{  // abstract class  // kam chor boss

  // A class is abstract if it has at least one pure virtual function.

  public:

  string model;
  string company;

  Vehicle(string model,string company){
    this->model = model;
    this->company = company;
  }

  virtual void display() = 0;
  virtual void startEngine(int a) = 0;
  virtual void stopEngine() = 0;

};

class Car : public Vehicle{

  int numDoors;

  public:

  Car(int numDoors,string model,string company) : Vehicle(model,company){
    this->numDoors = numDoors;
  }

  void display(){
    cout<<"Model : "<<model<<endl;
    cout<<"Company : "<<company<<endl;
    cout<<"Number of Doors : "<<numDoors<<endl;
  }
  void startEngine(int a){
    cout<<"Starting Engine"<<endl;
  }
  void stopEngine(){
    cout<<"Stopping Engine"<<endl;
  }

};

int main(){

  Car c1(4,"A4","Audi");
  c1.display();
  c1.startEngine(12);
  c1.stopEngine();

  return 0;
}
