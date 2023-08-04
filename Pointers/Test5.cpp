#include<iostream>

using namespace std;

void solve(int *ptr){
    ptr = ptr + 1;
}

int main(){ 
    int x =5;
    int y = x;

    cout << &x << endl;
    cout << &y << endl;    

    int* ptr = &x;

    cout << ptr << endl;
    cout << *ptr << endl; 

    solve(ptr);

    cout << ptr << endl;
    cout << *ptr << endl; 
}