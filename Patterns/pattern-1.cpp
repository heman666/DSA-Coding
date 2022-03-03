/*
1
2 3
4 5 6
7 8 9 10
*/

#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Give the number of rows you want to print : ";
    cin >> n;
    int row = 1, num = 1;
    while (row < n)
    {

        for (int i = 0; i < row; i++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << "\n";
        row = row + 1;
    }
}