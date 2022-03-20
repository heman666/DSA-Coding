#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr;
    int n;

    cout << "Enter the number of values in array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        arr.push_back(elem);
    }

    cout << arr.size() << endl;
    printVector(arr);
    return 0;
}