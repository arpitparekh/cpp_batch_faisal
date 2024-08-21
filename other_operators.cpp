#include<iostream>

using namespace std;

int main(){

    int a = 10;

    // , operator
    // int b = a+10;
    int b = (a+10,a-10,a+5,a+8);  // used in loops for multiple initialization

    cout << b << endl;
    

    return 0;
}