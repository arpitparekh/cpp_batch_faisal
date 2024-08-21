#include <iostream>
#define PI 3.14
#define faisal 123

using namespace std;

int sum(int a)
{
    return a + faisal;
}

int main()
{

    int a = 12;
    a = 34;
    cout << a << endl;

    const int a1 = 12; // local constant

    const char ch = 'a'; // constant
    // ch = 'b'; // Error: cannot assign a value to 'ch'

    int arr[] = {12, 23, 45, 54, 34, 243};

    const int arr2[] = {23, 56, 4, 3, 2, 5};
    // arr2[0] = 12;  // noy allowed

    // const int a;  // noit allowed
    // a = 12;

    cout << PI << endl;
    cout << faisal << endl;

    cout << sum(10) << endl;

    // const pointers

    float f = 4.5;
    const float *p = &f;  // can no change the value of that location but can chnage the location

    cout << *p << endl;
    // *p = 6.7;   // not allowed

    float f2 = 7.8;
    p = &f2;
    cout << *p << endl;

    bool bu = true;
    bool* const ptr = &bu; // can not change the location but can change the value
    *ptr = false;

    cout << *ptr << endl;

    bool bu2 = false;
    // ptr = &bu2;

    return 0;
}
