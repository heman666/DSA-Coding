#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v{0, 2, 10, 6};

    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (v[m] <= v[m + 1])
        {
            l = m + 1;
        }
        else
        {
            r = m;
        }
    }

    cout << r << endl;
    return 0;
}