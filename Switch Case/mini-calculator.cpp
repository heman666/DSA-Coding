#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Enter the value for a : ";
    cin >> a;
    cout << "Enter the value for b : ";
    cin >> b;

    char op;
    cout << "Enter the operation : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    }

    return 0;
}