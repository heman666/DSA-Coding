// When out of bounds index is called in array, it usually doesn't give any error.
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr[10] << endl;
    return 0;
}