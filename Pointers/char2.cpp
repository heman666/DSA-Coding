#include<iostream>

using namespace std;

int main(){

    char name[10] = "Babbar";

    char *c = "Babbar"; //Bad practise

    cout << name << endl;

    cout << c << endl;
    return 0;
}