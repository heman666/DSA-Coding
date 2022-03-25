//Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.
//The array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.

//Best Case : O(N) , when array is sorted
//Worst Case : O(N^2) , when array is in reverse order i.e 4,3,2,1;

//Inplace Sorting : Yes
//Stable : Yes
//Adaptive : Yes

//Inplace Sorting Algorithm uses constant space for producing the output.
//Adaptive : A sorting algorithm falls into the adaptive sort family if it takes advantage of existing order in its input.

//Uses: Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.

//Links : https://www.geeksforgeeks.org/insertion-sort/#:~:text=Uses%3A%20Insertion%20sort%20is%20used,misplaced%20in%20complete%20big%20array.
//https://www.youtube.com/watch?v=7kIVfVY6Axk
#include<iostream>
#include<vector>

using namespace std;

void PrintVector(vector<int>v,int n){
    for(auto elem : v){
        cout << elem << " ";
    }

    cout << endl;
}

void InsertionSort(vector<int> &v, int n){
    int index,elem;
    for(int i=1;i<n;i++){
        index = i-1;
        elem = v[i];
        while((index >= 0) && (v[index] > elem)){
            v[index+1] = v[index];
            index--;
        }
        v[index+1] = elem;
    }
}


int main(){

    vector<int>v;
    int n;

    cout << "Enter the number of values: ";
    cin >> n;

    int elem;
    for(int i=0;i<n;i++){
        cin >> elem;
        v.push_back(elem);
    }

    cout << "Before Sorting : ";
    PrintVector(v,n);

    InsertionSort(v,n);

    cout << "After Sorting : ";
    PrintVector(v,n);

    return 0;
}