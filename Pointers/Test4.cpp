#include<iostream>

using namespace std;

int main(){
    // int arr[2] = {0};
    // cout << *(arr+2) << endl;

    char arr[2] = {'a','b'}; 

    cout << *arr << endl;
    cout << *(arr+1) << endl;
    cout << 1[arr] << endl;

    char *ptr = arr;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    cout << ptr + 1 << endl;

}