//https://leetcode.com/problems/valid-palindrome-ii/

#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string str,int l, int r){
    bool result = true;

    while(l <= r){
        if(str[l] != str[r]){
            result = false;
            break;
        }
        l++;
        r--;
    }

    return result;
}

bool checkPalindrome2(string str){

    bool result = true;

    int l = 0, r = str.length()-1;

    while(l <= r){
        if(str[l] != str[r]){
            string temp = str;
            return checkPalindrome(str,l+1,r) || checkPalindrome(str,l,r-1);
        }
        l++;
        r--;
    }

    return result;
}

int main(){

    string str;

    cout << "Enter a string: ";
    getline(cin,str);

    bool result = checkPalindrome2(str);

    if(result){
            cout << "String is a valid palindrome ";
    }else{
        cout << "String isn't a valid palindrome";
    }

    return 0;
}