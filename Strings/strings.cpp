#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){

    string str;

    getline(cin,str);

    cout << str << endl;

    str[2] = '\0';
    str[4] = '\0';
    cout << str << endl;

    return 0;
}