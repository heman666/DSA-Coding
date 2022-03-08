#include <iostream>

using namespace std;

long long int getSqrt(int number)
{
    int l = 0, r = number - 1, ans;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (mid * mid == number)
        {
            return mid;
        }
        else if (mid * mid > number)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int number, precision;
    cout << "Enter any value of the number and precision(1-3) : " << endl;
    cin >> number >> precision;
    cout << number << " " << precision << endl;

    int sqrt_Num = getSqrt(number);
    cout << "Square root of the number : " << number << " is : " << sqrt_Num << endl;
    return 0;
}