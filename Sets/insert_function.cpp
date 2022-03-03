#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    set<int> ans;
    // vector<int> vect{10, 20, 30};
    int arr[] = {10, 20, 30, 30};
    for (int i = 0; i < 4; i++)
    {
        //        cout << ans.insert(arr[i]) << endl;
        cout << ans.insert(arr[i]).second << endl;
    }

    return 0;
}