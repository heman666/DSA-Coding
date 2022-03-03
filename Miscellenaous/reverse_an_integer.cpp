#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num = 321;
    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;
        ans = (ans * 10) + digit;
        num = num / 10;
    }
    cout << ans << endl;
    // cout << 1.33 % 1 << "\n";
    return 0;
}