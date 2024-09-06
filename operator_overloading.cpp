#include<iostream>
#include<string>

using namespace std;

class Student{

  public:
    string name;
    int age;

    Student(string name,int age){

      this->name = name;
      this->age = age;
    }

    // create function to overloading operator
    Student operator<(Student &obj){ // operator overloading by gincing him different name

      Student res("",0);
      res.name = this->name + " " + obj.name;
      res.age = this-> age + obj.age;

      return res;
    }

    // void operator<(Student &obj){ // operator overloading by gincing him different name

    //   Student res("",0);
    //   res.name = this->name + " " + obj.name;
    //   res.age = this-> age + obj.age;

    //   cout << res.name << endl;
    //   cout << res.age << endl;
    // }

    // Student meraFunction(Student &obj){
    //   Student res("",0);
    //   res.name = this->name + " " + obj.name;
    //   res.age = this-> age + obj.age;

    //   return res;
    // }
};

int main(){

  // operator overloading // polymorphism
  // + - * / % ++ -- = += -= *= /= %= == != < > <= >= && || ! ++a --a

  Student s1("faisal",20);
  Student s2("ahmed",21);

  Student s3 = s1 < s2;

  // Student s3 = s1.meraFunction(s2);

  cout << s3.name << endl;
  cout<< s3.age << endl;

  return 0;
}
