#include<iostream>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

int main(){
    string s = "MCMXCIV";

    map<char,int>v;

    v['I'] = 1;
     v['V'] = 5;
    v['X'] = 10;
     v['L'] = 50;
    v['C'] = 100;
     v['D'] = 500;
    v['M'] = 1000;

    int sum = v[s[0]];

    for(int i=1;i<s.length();i++){
        if(v[s[i]] > v[s[i-1]]){
            sum -= v[s[i-1]];
            sum += (v[s[i]] - v[s[i-1]]);
        }else{
            sum += v[s[i]];
        }
    }

    cout << "Sum: "  << sum << endl;
    return 0;
}