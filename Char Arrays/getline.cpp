//Use getline function to take inputs with enter, tab,spaces

#include<iostream>

using namespace std;

int main(){

    char ch[100];

    cin.getline(ch,50);

    cout << ch << endl;
    return 0;
}