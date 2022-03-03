/*
1
2 1
3 2 1
4 3 2 1    
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

        int col = 1;
        cout << row << " ";
        while (col < row)
        {
            cout << row - col << " ";
            col = col + 1;
        }
        cout << "\n";
        row = row + 1;
    }
    return 0;
}