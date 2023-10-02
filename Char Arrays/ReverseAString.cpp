#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char ch[100];

    cin.getline(ch,50);

    cout << "String before: " << ch << endl;

    int l = 0;
    int r = strlen(ch) - 1;

    while(l < r){
        char temp = ch[l];
        ch[l] = ch[r];
        ch[r] = temp;
        l++;r--;
    }

    // For loop code for swapping the characters
    // for(;l<r;l++,r--){
    //     swap(ch[l],ch[r]);
    // }

    cout << "Reversed String: " << ch << endl;
    return 0;
}