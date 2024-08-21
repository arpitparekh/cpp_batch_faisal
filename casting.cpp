#include <iostream>

using namespace std;

int main()
{

    // casting in c++
    int a = 12;

    cout << (float)a << endl;

    int *ptr = &a;
    float *ptr2 = (float *)ptr;

    int num = 13;
    char ch = 'a';

    int sum = num + ch; // implicit casting

    cout << (int)ch << endl;
    cout << sum << endl;

    int x = 12;
    int y = 13;

    cout << (float)x / y << endl;

    int b = 5656;
    string data = to_string(b); // to convert int to string
    cout << data << endl;

    // cast string to integer
    string str = "123.45";

    cout << stof(str) << endl;

    // implicit casting
    // bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
    bool isLogin = 'a';
    cout << isLogin << endl;

    long long l = 344344354;
    int i = (int)l;
    cout << i << endl;

    return 0;
}