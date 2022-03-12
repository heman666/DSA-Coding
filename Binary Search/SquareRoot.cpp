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

double GetPrecision(int number, int sq_number, int precision)
{
    double ans = sq_number;
    double pre = 1;
    for (int i = 1; i <= precision; i++)
    {
        pre = pre / 10;
        for (double j = sq_number; j * j < number; j += pre)
        {
            ans = j;
        }
    }
    return ans;
}

float GetPrecision_f(int number, int sq_number, int precision)
{
    float ans = sq_number;
    float pre = 1;
    for (int i = 1; i <= precision; i++)
    {
        pre = pre / 10;
        for (float j = sq_number; j * j < number; j += pre)
        {
            ans = j;
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
    cout << "Square root of the number : " << number << " is : " << GetPrecision(number, sqrt_Num, precision) << endl;
    cout << "Square root of the number : " << number << " is : " << GetPrecision_f(number, sqrt_Num, precision) << endl;
    return 0;
}