/*
1
2 3
3 4 5
4 5 6 7
*/
#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        cout << row << " ";
        while (col < row)
        {
            cout << col + row << " ";
            col = col + 1;
        }
        cout << "\n";
        row = row + 1;
    }

    return 0;
}