#include<iostream>
#include<string>

using namespace std;

// encapsulation is a process a hiding a data using access modifiers

class Student{

  private:
    string name;
    int age;

  public:
  string getName(){    // getter function
    return name;
  }
  int getAge(){
    return age;
  }

  void setName(string name){  // setter function
    this->name = name;
  }
  void setAge(int age){
    this->age = age;
  }

};

int main()
{

  // u cna not acces sprivate memeber outside of a class using object not possible ever
  // u can access it using public methods

  Student s;
  s.setName("Faisal");
  s.setAge(20);
  cout << s.getName() << endl;
  cout << s.getAge() << endl;

}
