#include<iostream>
#include<cstring>

using namespace std;

void getLength(char ch[]){
    int length=0;
    int i=0;

    while(ch[i] != '\0'){
        i++;
        length++;
    }

    cout << "Length of the character array is: " << length << endl;
}

int main(){

    char ch[100];

    cin.getline(ch,50);

    getLength(ch);
    cout << "In built function: " << strlen(ch) << endl;
    return 0;
}