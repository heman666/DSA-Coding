#include <iostream>

using namespace std;

int main()
{
    int x = 121;

    int ans = 0;
    while (x > ans)
    {
        ans = (ans * 10) + (x % 10);
        x = x / 10;
    }
    if ((x == ans) || (ans / 10 == x))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}