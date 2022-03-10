#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> stalls, int n, int m, int cows)
{

    int cowsCount = 1;
    int Stall = stalls[0];

    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - Stall >= m)
        {
            cowsCount++;
            if (cowsCount == cows)
            {
                return true;
            }
            Stall = stalls[i];
        }
    }

    return false;
}

int main()
{
    int arr[5] = {4, 2, 1, 3, 6};
    vector<int> stalls(arr, arr + 5);
    int cows = 2;

    sort(stalls.begin(), stalls.end());

    int l = 0, r = stalls.back(), ans;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (isPossible(stalls, stalls.size(), m, cows))
        {
            ans = m;
            cout << ans << endl;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << ans << endl;
    return 0;
}