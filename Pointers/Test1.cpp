#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 5;
    cout << &a << endl;
    cout << &b << endl;

    int* ptr = &a;

    cout << sizeof(ptr) << endl;

    long int l = 10;

    long* ptr2 = &l;

    cout << sizeof(l) << endl;
    cout << sizeof(ptr2) << endl;
    return 0;
}