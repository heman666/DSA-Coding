/*
   1   
  121 
 12321
1234321        

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

        int space = n - row;
        while (space > 0)
        {
            cout << " ";
            space = space - 1;
        }

        int num = 1;

        while (num <= row)
        {
            cout << num;
            num = num + 1;
        }

        int i = 1;
        num = num - 2;

        while (i < row)
        {
            cout << num;
            num = num - 1;
            i += 1;
        }

        cout << "\n";
        row = row + 1;
    }

    return 0;
}