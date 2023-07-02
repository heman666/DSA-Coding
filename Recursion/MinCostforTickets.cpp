#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findmincost(vector<int>days,vector<int>costs, int i){
    if(i >= days.size()){
        return 0;
    }
    // 1 day pass
    int cost1 = costs[0] + findmincost(days,costs,i+1);

    //7 days pass
    int j = i;
    int passendDay = days[i] + 7 - 1;
    while(j < days.size() && days[j] <= passendDay){
        j++;
    }
    int cost7 = costs[1] + findmincost(days,costs,j);

    //30 days pass
    j = i;
    passendDay = days[i] + 30 - 1;
    while(j < days.size() && days[j] <= passendDay){
        j++;
    }
    int cost30 = costs[2] + findmincost(days,costs,j);

    return min(cost1,min(cost7,cost30));
}

int main(){

    vector<int> costs {2,7,15};
    vector<int>days {1,4,6,7,8,20};

    int minCost = findmincost(days,costs,0);
    cout << minCost << endl;
    return 0;
}
