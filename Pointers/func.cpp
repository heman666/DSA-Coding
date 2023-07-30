#include<iostream>

using namespace std;

void solve(int arr[]){

    cout << arr << endl;
    cout << &arr << endl;
    arr = arr + 2;

    cout << arr << endl;
    cout << &arr << endl;

    cout << *arr << endl;
    cout << *(&arr) << endl;

}

int main(){

    int arr[5] = {1,2,3};

       cout << arr << endl;
    cout << &arr << endl;

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    solve(arr);

   cout << arr << endl;
    cout << &arr << endl;

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}