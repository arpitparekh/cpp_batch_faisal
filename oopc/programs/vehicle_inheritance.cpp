/*
Design and implement a base class called "Vehicle" and derived classes "Car," "Motorcycle," and "Truck" using inheritance in C++.

The "Vehicle" class should have common properties like make, model, year, and methods like startEngine() and stopEngine().

Each derived class should have its own unique properties and methods in addition to inheriting from the base class. F

or example, "Car" could have properties like numDoors and a method like lockDoors(), "Motorcycle" could have a property like engineCC, and "Truck" could have a property like towingCapacity. Demonstrate the use of constructors, destructors, and virtual functions where appropriate.

*/

#include<iostream>
#include <string>

using namespace std;

class Vehicle
{

public:
    string make;
    string model;
    int year;

    void startEngine()
    {
        cout << "Starting Engine" << endl;
    }

    void stopEngine()
    {
        cout << "Stopping Engine" << endl;
    }
};

class Car : public Vehicle {
public:
    int numDoors;

    Car(int numDoors)
    {
        this->numDoors = numDoors;
    }

    void lockDoors()
    {
        cout << numDoors << " Doors are Locked" << endl;
    }
};
class Motorcycle : public Vehicle {

    public:
        int engineCC;

        Motorcycle(int engineCC)
        {
            this->engineCC = engineCC;
        }
};

class Truck : public Vehicle {
    public:
        int towingCapacity;

        Truck(int towingCapcaity)
        {
            this->towingCapacity = towingCapacity;
        }
};

int main()
{

  Car c(10);
  c.lockDoors();
  c.startEngine();
  c.stopEngine();


  Motorcycle m(1000);
  m.startEngine();
  m.stopEngine();


  Truck t(1000);
  t.startEngine();
  t.stopEngine();

  return 0;
}
