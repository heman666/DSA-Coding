#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int>& v, int& maxi, int sum, int index){
    if(index >= v.size()){
        maxi = max(maxi,sum);
        return;
    }

    //Include
    solve(v,maxi,sum+v[index],index+2);
    //Exclude
    solve(v,maxi,sum,index+1);
}

int main(){

    vector<int> v{1,2,1,4,1};

    int sum = 0;
    int maxi = INT_MIN;

    solve(v,maxi,0,0);
    cout << maxi << endl;
    return 0;
}