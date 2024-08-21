// enum is a group of constant

#include <iostream>

using namespace std;
typedef int meraNumber;

meraNumber a1 = 12;
int b1;

enum muEnum
{
    a = 10,
    b,
    c,
    d
};

void myFunc()
{
    cout << b1 << endl;
}

void myFunc2()
{
    b1 = 35;
}

int main()
{

    int a1 = 45;

    myFunc();  // 0
    b1 = 34;
    myFunc();  // 34
    myFunc2();  
    myFunc();  // 35

    cout << a1 << endl;

    // enum
    // enumerations
    cout << a << endl;

    return 0;
}


