#include<iostream>

using namespace std;

int solve(int n, int& x, int& y, int& z){
    if(n==0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }

    int ans1 = solve(n-x,x,y,z)+1;
    int ans2 = solve(n-y,x,y,z)+1;
    int ans3 = solve(n-z,x,y,z)+1;

    int maxi = max(ans1,max(ans2,ans3));

    return maxi;
}


int main(){
    int n = 9;
    int x = 2;
    int y = 4;
    int z = 5;

    int  maxi = solve(n,x,y,z);
    if(maxi < 0){
        maxi = 0;
    }

    cout << maxi << endl;
    return 0;
}