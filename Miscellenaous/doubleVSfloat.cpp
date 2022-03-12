#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double a = 1.123456789;
    float b = 1.123456789;

    cout << sizeof(a) << " " << sizeof(b) << endl;
    cout << setprecision(9) << a << " " << setprecision(9) << b << endl;
    return 0;
}