#include <iostream>

using namespace std;

int main()
{

    int a = 1, b = 2;

    for (; a < 3 || b < 6; a++, b++)
    {
        cout << a << " " << b << endl;
    }

    return 0;
}