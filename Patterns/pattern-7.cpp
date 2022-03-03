/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int num = 1;
        while (n - row - num + 2 > 0)
        {
            cout << num;
            num += 1;
        }

        num -= 1;
        int stars = row - 1;
        while (stars > 0)
        {
            cout << "**";
            stars -= 1;
        }

        while (num > 0)
        {
            cout << num;
            num -= 1;
        }

        cout << "\n";
        row += 1;
    }

    return 0;
}