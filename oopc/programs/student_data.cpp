#include<iostream>
#include<string>
using namespace std;

class Location{
  public:
    string city;
    string state;
    int pincode;

    Location(string city, string state, int pincode){
      this->city = city;
      this->state = state;
      this->pincode = pincode;
    }
};

class Person : public Location{

  public:

  string name;
  int age;

  Person(string name, int age, string city, string state, int pincode) : Location(city, state, pincode){
    this->name = name;
    this->age = age;
  }
};

class Student : public Person{

  public:

  int total_marks;
  string course_name;

  Student(string name, int age, int total_marks, string course_name, string city, string state, int pincode) : Person(name, age, city, state, pincode){
    this->total_marks = total_marks;
    this->course_name = course_name;
  }

  void display(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Course Name: " << course_name << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Pincode: " << pincode << endl;
  }

};

int main(){

  Student s("Faisal", 20, 100, "C++", "Lalitpur", "Kathmandu", 44600);
  s.display();
}
