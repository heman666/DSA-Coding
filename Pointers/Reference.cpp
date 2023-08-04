#include<iostream>

using namespace std;

void solve(int*& ref){
    ref = ref + 1;
}

int main(){
    
    int x = 5;
    int& ref = x;
    int *p = &x;

    cout << &x << endl;
    cout << &ref << endl;    

    cout << p << endl;
    cout << *p << endl;    

    solve(p);

    cout << p << endl;
    cout << *p << endl;    

    return 0;
    }

