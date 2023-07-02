#include<iostream>
#include<string>
using namespace std;


void removeOccRE(string& str, string& part){
    if(str.find(part) != string::npos){
        string left_part = str.substr(0,str.find(part));
        string right_part = str.substr(str.find(part)+part.size(), str.size());
        str = left_part + right_part;
        removeOccRE(str,part);
    }else{
        return;
    }
}

int main(){

     string str = "abcdabc";
     string part = "abc";

    removeOccRE(str,part);
     cout << str << endl;
    return 0;
}