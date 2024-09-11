#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  // write file
  ofstream myfile;   // ifstream, ofstream
  myfile.open("test.txt");
  myfile << "Hello Faisal\n";
  myfile.close();

  // read file
  ifstream myfile2;
  myfile2.open("test.txt");
  string data;
  // myfile2 >> data;
  getline(myfile2, data);   // read data with space
  cout << data << endl;
  myfile2.close();
  
  return 0;
}
