#include<iostream>
#include<vector>

using namespace std;

void calculateMaxProfit(vector<int>& prices,int index, int& minPrice,int& maxProfit){
    if(index == prices.size()){
        return;
    }

    minPrice = prices[index] < minPrice ? prices[index] : minPrice;
    maxProfit = (prices[index] - minPrice) > maxProfit ? (prices[index] - minPrice) : maxProfit;

    calculateMaxProfit(prices,index+1,minPrice,maxProfit);  
}

int main(){

    vector<int> v{7,1,5,3,6,4};

    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    calculateMaxProfit(v,0,minPrice,maxProfit);

    cout << maxProfit << endl;

    //Iterative solution

    int minPrice1 = INT_MAX;
    int maxProfit1 = INT_MIN;
    for(int i = 0; i< v.size();i++){
            minPrice1 = v[i] < minPrice1 ? v[i] : minPrice1;
            maxProfit1 = (v[i] - minPrice1) > maxProfit1 ? (v[i] - minPrice1) : maxProfit1;

    }

    cout << maxProfit1 << endl;

    return 0;
}