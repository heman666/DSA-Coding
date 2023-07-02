#include<iostream>

using namespace std;

bool checkPalindrome(string str, int start, int end){
    if(start >= end){
        return true;
    }
    return str[start] != str[end] ? false : checkPalindrome(str,start+1,end-1);  
}

int main(){

    string str = "racecar";

    cout << checkPalindrome(str,0,str.length()-1) << endl;
    return 0;
}