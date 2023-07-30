#include<iostream>

using namespace std;

int main(){
    char ch[8] = "Hemanth";
    char* c = ch;
    char* c1 = &ch[0];

    cout << ch << endl;
    cout << &ch << endl; 
    cout << &ch[0] << endl;
    cout << *c << endl;
    cout << *c1 << endl;

    cout << c << endl;
    cout << c1 << endl;
    return 0;
}