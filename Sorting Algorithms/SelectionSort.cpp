//The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

//Best Case : O(N^2)
//Worst Case : O(N^2)

//Inplace Sort : Yes
//Stable : No Ex : 5(a) 3 4 5(b) 2 6 8

//Link : https://www.geeksforgeeks.org/selection-sort/
//https://www.youtube.com/watch?v=UdO2NeHB46c&t=2s

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

void SelectionSort(vector<int>& v,int n){
    int i,j,minIndex;
    for(i=0;i<n-1;i++){
        minIndex = i;
        for(j=i+1;j<n;j++){
            minIndex = v[j] < v[minIndex] ? j : minIndex;
        }

        swap(v[minIndex],v[i]);
    }
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

    cout << " Before sorting the array:";
    printVector(arr);

    SelectionSort(arr,n);

    cout << " After sorting the array:";
    printVector(arr);

    return 0;
}