//Aggressive cows problem 



//Link : https://www.youtube.com/watch?v=wSOfYesTBRk
//https://rushyab.medium.com/aggressive-cows-spoj-75a155bfe749

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
        if (stalls[i] - Stall >= m)// As m is the min distance between the cows, we have to check if the distance between stalls is atleast m
        {
            cowsCount++;
            if (cowsCount == cows)
            {
                return true;//If we have arranged all the cows, we can return true as this is a possible solution.
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
        int m = l + (r - l) / 2;//"m" is the largest minimum value possible to place cows apart from each other
        if (isPossible(stalls, stalls.size(), m, cows))
        {
            ans = m;//We want to find out largest minimum distance between 2 cows, therefore once we find a solution
            cout << ans << endl;//we leave out the half before it and focus mainly on the right half.
            l = m + 1;
        }
        else
        {
            r = m - 1;//If we are not able to place cows with a minimum of "m" distance, there is no way we can do it with "m+1";
        }
    }

    cout << ans << endl;
    return 0;
}