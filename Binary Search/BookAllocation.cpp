#include <iostream>

using namespace std;

bool isPossible(int pages[], int m, int n, int mid)
{
    int students = 1, sum = 0;
    cout << "-----------" << endl;
    for (int i = 0; i < n; i++)
    {
        if (sum + pages[i] <= mid)
        {
            sum += pages[i];
        }
        else
        {
            students++;
            if (students > m || pages[i] > mid)
            {
                cout << "Entered" << endl;
                return false;
            }
            sum = pages[i];
        }
        cout << students << endl;
        cout << sum << endl;
    }
    cout << "-----------" << endl;
    return true;
}
int minOfMaxOfPages(int pages[], int m, int n)
{
    int ans = -1;
    int l = INT_MIN, r = 0; // Here is the Max number of pages a student can read if only one book is given and r is sum of all pages.
    cout << "n : " << n << endl;
    for (int i = 0; i < n; i++)
    {
        r += pages[i];
        l = pages[i] > l ? pages[i] : l;
    }

    cout << r << ' ' << l << endl;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        cout << l << ' ' << r << " " << mid << endl;
        if (isPossible(pages, m, n, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int pages[] = {10, 20, 30, 40}; // arr[i] represents number of pages in Book i
    int m = 2;                      // Number of students
    int n = sizeof(pages) / sizeof(pages[0]);
    cout << minOfMaxOfPages(pages, m, n);
    return 0;
}