#include<iostream>
#include<string>
#include<cmath>
using namespace std;


void sum(){
  cout << "Sum of two numbers: " << 10 + 20 << endl;
}

void sum(int a){
  cout << "Sum of two numbers: " << a + 20 << endl;
}

void sum(int a, int b){
  cout << "Sum of two numbers: " << a + b << endl;
}
void sum(int a,string name){
  cout << "another function: " << a << name << endl;
}

void sum(string name,int a){
  cout << "another function: " << name << a << endl;
}


void sum(int a, int b, int c){
  cout << "Sum of two numbers: " << a + b + c << endl;
}

int main(){

  // polymorphism
  // compile time polymorphism
  // runtime polymorphism

  // polymorphism is the ability of an object to take on many forms
  // poly = many
  // morphism = forms

  // function  overloading we can achive polimorphism
  // no of parameter should be different
  // type of parameter should be different
  // order of parameter should be different

  sum("faisal",20);

  return 0;
}
