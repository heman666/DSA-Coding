#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    // cout << ~(0) << "\n";

    int n = -1;
    n = n * -1;
    cout << n << "\n";
    n = ~n;
    cout << n << "\n";
    n++;

    int i = 0, ans = 0;
    cout << i << "\n";
    while (n > 0)
    {
        int bit = n & 1;
        ans = (pow(10, i) * bit) + ans;
        cout << ans << "\n";
        n = n >> 1;
        i++;
    }

    cout << ans << "\n";
    return 0;
}
