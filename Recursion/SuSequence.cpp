#include<iostream>

using namespace std;

void subSequence(string str, int i, int n, string sub){
    if(i >= n){
        cout << sub << endl;
        return;
    }

    subSequence(str,i+1,n,sub + str[i]);
    subSequence(str,i+1,n,sub);
}
 

int main(){

    string str = "abc";
    subSequence(str,0,str.length(),"");

    return 0;
}