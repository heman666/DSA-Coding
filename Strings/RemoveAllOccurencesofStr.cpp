//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

#include<iostream>
#include<string>

using namespace std;

string RemoveOccurences(string str, string pattern){

    int pos = str.find(pattern);

    while(pos != std::string::npos){
//        str = str.substr(0,pos-1) + str.substr(pos+pattern.length());
        str.erase(pos,pos+pattern.length());
        pos = str.find(pattern);
    }

    return str;
}

int main(){

    string str,pattern;

    cout << "Enter the original string:";
    getline(cin,str);

    cout << "Enter the pattern: ";
    getline(cin,pattern);

    str = RemoveOccurences(str,pattern);

    return 0;
}