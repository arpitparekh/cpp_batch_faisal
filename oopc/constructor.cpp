#include<iostream>
#include<string>

using namespace std;

class Institute{

  // property // varaibles
  // methods // functions // class methods

  public:
    string name = "";
    int no_student = 0;
    string location = "";

    // constructor
    Institute(){
      cout << "Constructor is called" << endl;
    }

    Institute(int a){
      cout << "Constructor is called " << a << endl;
    }

    // this keyword referse to the class members

    void assignValues(string name,int no_student,string location){
      this->name = name;
      this->no_student = no_student;
      this->location = location;
    }

    void displayValues(){
      cout << this->name << endl;
      cout << no_student << endl;
      cout << location << endl;
    }

};

int main(){

  Institute i(12);

  // i.name = "Bascom";
  // i.no_student = 100;
  // i.location = "Vastrapur";

  i.assignValues("Bascom", 100, "Vastrapur");

  i.displayValues();

  // constructor
  // constructor is function with same name as class
  // constructor is called when object is created
  // constructor is called automatically
  // constructor is used to initialize the object

  return 0;
}
