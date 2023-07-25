#include<iostream>

using namespace std;

int main(){

    int a = 5;
    int* ptr = &a;
    cout << ptr << endl;
    ptr += 1;

    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}