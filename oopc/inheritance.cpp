// inheritance
#include <iostream>
#include<string>
using namespace std;

class Person{

  public:
    string name;
    int age;

};

class Student : public Person{

    // inheritance
    // accessing parent class property and function using child class object

    public:
      int total_marks=0;

      void display()
      {
        cout << name << endl;
        cout << age << endl;
        cout << total_marks << endl;
    }

};

int main(){

  Student s;
  s.age = 20;
  s.name = "Faisal";
  s.total_marks = 45;
  s.display();

  return 0;
}
