// access modifiers in c++

#include <iostream>
#include <string>

using namespace std;

class Product{
  public:
    string name;   // i can use it outside of a class
  private:
    int price;
  protected:     // i can only use it inside a class
    int quantity;
};

class cloths : public Product{
  public:
    void display(){
      cout << "Quantity: " << name << endl;
    }
};

int main(){

  Product p;
  // p.quantity = 10;  // not allowe only in child class
  return 0;
}


// class
// object
// constructor
// polymorphism
// inheritance
// function overloading
// function overriding


// operator overloading
