#include <iostream>
#include <limits.h>

using namespace std;
int main()
{

    // wide character
    char ch = '2';
    wchar_t ch2 = L'g';

    cout << (char)ch2;

    cout << "char maximum value: " << CHAR_MIN << endl;

    int a = 10;
    short b = 20;
    long c = 30;  // 4 to 8
    long long d = 40;
    float e = 10.5;
    double f = 10.6;
    long double g = 10.7;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;

    return 0;
}