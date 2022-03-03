//Trying to use continue in a switch statement

#include <iostream>

using namespace std;

int main()
{

    int num = 1;
    switch (num)
    {
    case 1:
        cout << "Hello there!" << endl;
        continue;
    default:
        cout << "Entered default case" << endl;
    }
    return 0;
}