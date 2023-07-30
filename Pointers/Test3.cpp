#include<iostream>

using namespace std;

int main(){
    int arr[10] = {0};
 
    cout << arr << endl;
    cout << arr[0] << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    // return 0;

    int *p = arr;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    cout << p[3] << endl;
}