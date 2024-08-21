#include <iostream>
#include <limits.h>
#include <float.h>

using namespace std;

int main()
{

    int a = 10;

    int &ref = a;
    cout << ref << endl;
    cout << a << endl;
    ref = 20;

    cout << ref << endl;
    cout << a << endl;

    // Displaying ranges with the help of macros
    cout << "char ranges from: " << CHAR_MIN << " to "
         << CHAR_MAX << endl;
    cout << "\nshort char ranges from: " << SCHAR_MIN
         << " to " << SCHAR_MAX << endl;
    cout << "\nunsigned char ranges from: " << 0 << " to "
         << UCHAR_MAX << endl;

    cout << "\n\nshort int ranges from: " << SHRT_MIN
         << " to " << SHRT_MAX << endl;
    cout << "\nunsigned short int ranges from: " << 0
         << " to " << USHRT_MAX << endl;
    cout << "\nint ranges from: " << INT_MIN << " to "
         << INT_MAX << endl;
    cout << "\nunsigned int ranges from: " << 0 << " to "
         << UINT_MAX << endl;
    cout << "\nlong int ranges from: " << LONG_MIN << " to "
         << LONG_MAX << endl;
    cout << "\nunsigned long int ranges from: " << 0
         << " to " << ULONG_MAX << endl;
    cout << "\nlong long int ranges from: " << LLONG_MIN
         << " to " << LLONG_MAX << endl;
    cout << "\nunsigned long long int ranges from: " << 0
         << " to " << ULLONG_MAX << endl;

    cout << "\n\nfloat ranges from: " << FLT_MIN << " to "
         << FLT_MAX << endl;
    cout << "\nnegative float ranges from: " << -FLT_MIN
         << " to " << -FLT_MAX << endl;
    cout << "\ndouble ranges from: " << DBL_MIN << " to "
         << DBL_MAX << endl;
    cout << "\nnegative double ranges from: " << -DBL_MIN
         << " to " << -DBL_MAX << endl;

    int a5 = -12;
    cout << a5 << endl;

    return 0;
}