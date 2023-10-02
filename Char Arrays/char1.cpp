#include<iostream>

using namespace std;

int main(){

    char arr[10] = "Hemanth";

    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i=0;i<10;i++){
        if(arr[i] == '\0'){
            cout << "Null chara reached at " << i << endl;
        }
        // cout << arr[i] << " ";
    }

    //Always need to have n+1 characters arr to store n values.
    char name[10] = "abcdefghi";
        
    for(int i=0;i<10;i++){
        cout << name[i] << " ";
        if(name[i] == '\0'){
            cout << "Null char at " << i << endl;
        }
    }

    //Trying to add a null character in between the char array

    name[5] = '\0';

    cout << name << endl;
    for(int i=0;i<10;i++){
    cout << name[i] << " ";
    if(name[i] == '\0'){
        cout << "Null char at " << i << endl;
        }
    }

    return 0;
}