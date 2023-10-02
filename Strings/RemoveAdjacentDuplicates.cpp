#include<iostream>
#include<string>

using namespace std;

string RemoveAdjacentDuplicates(string str){
    string ans = "";

    int i = 0;

    while(i < str.length()){
        if((ans.length() >= 1) && (ans[ans.length() - 1] == str[i])){
            ans.pop_back();
        }else{
            ans.push_back(str[i]);
        }
        i++;
    }

    return ans;
}


int main(){

    string str;

    cout << "Enter the string for which you want to apply this function: "; 
    getline(cin,str);

    cout << "Entered string: " << str << endl;

    str = RemoveAdjacentDuplicates(str);

    cout << "Modified String: " << str << endl;
    return 0;
}