#include<iostream>
#include<string>

using namespace std;

size_t RemoveOccurences(string str,string pattern){

    size_t str_len = str.length();
    size_t pat_len = pattern.length();

    if(pat_len > str_len){
        return string::npos;
    }

    for(int i=0;i<= str_len-pat_len;i++){
        bool found = 1;
        for(int j=0;j<pat_len;j++){
            if(str[i+j] != pattern[j]){
                found = 0;
                break;
            }
        }

        if(found){
            return i;
        }
    }
    return string::npos;
}


int main(){

    string str,pattern;

    cout << "Enter the original string:";
    getline(cin,str);

    cout << "Enter the pattern: ";
    getline(cin,pattern);

    size_t pos = RemoveOccurences(str,pattern);
    cout << "First occurence is at: " << pos << endl;
    return 0;
}