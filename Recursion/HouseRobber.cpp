#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maximumRob(vector<int>& jewels, int sum, int index){
    if(index >= jewels.size()){
        return sum;
    }

    return max(maximumRob(jewels,sum + jewels[index], index+2),maximumRob(jewels,sum, index+1));
}

int main(){

    vector<int> jewellery{1,2,3,4,1};

    int maxRob = maximumRob(jewellery,0,0);
    cout << maxRob << endl;
    return 0;
}