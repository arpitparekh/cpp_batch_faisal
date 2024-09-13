#include <iostream>
#include <string>

using namespace std;

// generic functions
// normal fucntion
// void sum(int a, int b) { cout << a + b << endl; }

// function template
// generic function
template <typename T> void sum(T a,T b){
  cout << a + b << endl;
}

template <typename T,typename S> void multipy(T a, S b){
  cout << a * b << endl;
}

template <typename T,typename S> class Faisal{
  public:
    T a;
    S b;

    Faisal(T a, S b){
      this->a = a;
      this->b = b;
    }

    void display(){
      cout << a << endl;
      cout << b << endl;
    }
};


class Arpit{
  public:
    void hello();
};

void Arpit::hello(){
  cout << "Hi Faisal" << endl;
}

int main() {

  sum<float>(12.45, 13.12);
  sum<string>("Hello ", "Faisal");
  sum<float>(12.12, 143.12);         // specify the type at the time of calling the function

  multipy<int, float>(12, 12.12);
  multipy<float, int>(12.12, 12);
  multipy<float, float>(12.12, 12.12);
  multipy<int, int>(12, 12);

  cout << "End" << endl;

  Faisal<int, float> f(12, 12.13);
  f.display();

  Arpit a;
  a.hello();

  return 0;
}
