#include<iostream>

using namespace std;

int* solve(int* p){
    int a = 25;
    int* ans = &a;
    return ans;
}

int main(){

    int x =5;

    int*ptr =nullptr;

    cout << ptr << endl;
    cout << *ptr << endl;

    ptr = solve(&x);

    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}