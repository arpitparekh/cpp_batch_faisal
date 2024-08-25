#include<iostream>
#include<string>

using namespace std;

class Student{  // name should always capital

  public:  // access modifers

    string name = "";    // atributes
    string address = "";
    float height = 0;
    
    void printInfo(){
      cout << "Name: " << name << endl;          // methods  // memeber functions
      cout << "Address: " << address << endl;
      cout << "Height: " << height << endl;
    }

};

int main(){

  // oopc
  // object oriented programming concept
  // divide our code in different different classes

  // class
  // blueprint
  // class a collection of variables and methods

  Student s = Student();
  s.name = "Faisal";
  s.address = "Vastrapur";
  s.height = 5.6;

  s.printInfo();

  Student s1 = Student();
  s1.name = "Ahmed";
  s1.address = "Lalitpur";
  s1.height = 5.5;

  s1.printInfo();

  return 0;
}
