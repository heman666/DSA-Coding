#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

void solve(vector<vector<string>>& digits_map,vector<string>& v, string str, int row){
    if(str.length() == digits_map.size()){
        v.push_back(str);
        return;
    }

    vector<string> value = digits_map[row];
    for(int i = 0;i< v.size()-1;i++){
            str = str + value[i];
            solve(digits_map,v,str,i+1);
            str.pop_back();
    }
}


int main(){

    string digits = "23";

    unordered_map<char,vector<string>> map;
    map['2'] = { "a", "b", "c" }; 
    map['3'] = { "d", "e", "f" }; 
    map['4'] = { "g", "h", "i" }; 
    map['5'] = { "j", "k", "l" }; 
    map['6'] = { "m", "n", "o" }; 
    map['7'] = { "p", "q", "r","s"}; 
    map['8'] = { "t", "u", "v" }; 
    map['9'] = { "w", "x", "y", "z" }; 

    vector<string> final_ans;

    vector<vector<string>> digits_map;

    for(auto ch: digits){
        // cout << ch << ": ";
        // for(auto str: map[ch]){
        //     cout << str << endl;
        // }
        digits_map.push_back(map[ch]);
    }

    for(auto digit_map: digits_map){
        for(auto num : digit_map){
            cout << num << " ";
        }
        cout << endl;
    }
    solve(digits_map,final_ans,"",0); 

    for(auto str: final_ans){
            cout << str << endl;
    }


    return 0;
}