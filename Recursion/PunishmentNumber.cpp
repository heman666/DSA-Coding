#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool isSatisfied(string& str, int num, int index, int currSum){
    if(index == str.length()){
        return currSum == num;
    }

    int n = 0;
    for(int i = index;i<str.length();i++){
        n = n*10 + (str[i] - '0');
        if(isSatisfied(str,num,i+1,currSum + n)){
            return true;
        }
    }
    return false;
}

int main(){
    int n = 10,ans=0;
    for(int i = 1;i<=n;i++){
        string str = to_string(i*i);
        if(isSatisfied(str,i,0,0)){
            ans += i*i;
        }
    }

    cout << ans << endl;
}