// multi threding
#include<iostream>
#include<thread>
#include<string>
#include<chrono>

using namespace std;
using namespace chrono;
using namespace this_thread;

// run things concurrently
// sub process is called thread

void printMessage(string data){
  sleep_for(seconds(2));
  cout << data << endl;
}

void printMessage2(string data){
  sleep_for(seconds(4));
  cout << data << endl;
}

int main(){

  cout << "Start of the program" << endl;

  thread t1(printMessage,"Hello Faisal");   // running this is a t1.join()
  thread t2(printMessage2,"Hello Atul");

  cout << "End of the program" << endl;

  t1.join();
  t2.join();

  return 0;
}
