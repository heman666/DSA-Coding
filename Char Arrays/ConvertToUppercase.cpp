#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[100];

    cin.getline(ch,50);

    int  l = 0;
    while(l < strlen(ch)){
        if(ch[l] >= 97 && ch[l] <= 123){
            ch[l] = ch[l] - 'a' + 'A';
        }
        l++;
    }

    cout << "Updated string: " << ch << endl;
    return 0;
}