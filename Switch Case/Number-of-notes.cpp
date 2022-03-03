#include <iostream>

using namespace std;

int main()
{
    int amount = 1335;

    switch (1)
    {
    case 1:
        cout << "Number of 100Rs notes : " << amount / 100 << endl;
        amount = amount % 100;
    case 2:
        cout << "Number of 50Rs notes : " << amount / 50 << endl;
        amount = amount % 50;
    case 3:
        cout << "Number of 20Rs notes : " << amount / 20 << endl;
        amount = amount % 20;
    case 4:
        cout << "Number of 1Rs notes : " << amount / 1 << endl;
        amount = amount % 1;
    }
    return 0;
}