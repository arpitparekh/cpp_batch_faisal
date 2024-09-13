#include <iostream>
#include <string>
#include<exception>
using namespace std;


// exception handling
class Data{

  public:
    void checkData(int x){
      if (x < 10) {
        throw x;
      } else {
        cout << "Data is valid" << endl;
      }
    }
};

int main() {

  cout << "Start" << endl;

  try{
    // throw runtime_error("Error");

    int divisor = 4;

    if(divisor==0){
      throw runtime_error("Divsion by zero");
    }

    cout << 12 / divisor << endl;

  }catch(exception &e){
    cout << e.what() << endl;
  }

  cout << "End" << endl;

  Data d1;


  try{
    d1.checkData(9);
  }catch(...){
    cout << "Data is not valid " << endl;
  }


  try{

    throw 12;
  }catch(int x){

    try{

      throw 12.5;
    }catch(int y){

    }catch(...){

      cout << "Float" << endl;
    }

  }catch(float f){
    cout << "Float" << endl;
  }catch(bool b){
    cout << "Boolean" << endl;
  }catch(...){
    cout << "Unknown" << endl;
  }


  cout << "End  of Program" << endl;

  return 0;
}
