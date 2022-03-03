/*
1 1 1 1
  2 2 2
    3 3
      4
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
        int space = row - col;
        // Print '-'s
        while (space > 0)
        {
            cout << "__";
            space = space - 1;
        }

        // Print numberss
        while (n - col - row + 2 > 0)
        {
            cout << row << " ";
            col = col + 1;
        }

        cout << "\n";
        row = row + 1;
    }
    return 0;
}