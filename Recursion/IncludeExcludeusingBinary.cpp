#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int>v{-4,-4,-5};

    int iterations = 1 << v.size();
    int maxProd = v[0];
    for(int i =1;i < iterations;i++){
        int prod = 1;
        for(int j=0;j<v.size();j++){
            if(i & (1 << j)){
                prod *= v[j];
            }
        }
        maxProd = max(maxProd,prod);
    }

    cout << maxProd << endl;
    return 0;
}