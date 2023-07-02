#include<iostream>
#include<vector>


using namespace std;

int solve(vector<int>v, int target){

    //Base Case 1 -> Case when target is reached
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    cout<< "Target: " << target << endl;
    for(int i =0;i<v.size();i++){
        int ans = solve(v,target-v[i]);
        cout << "For i: " << i << " ans : " << ans << endl; 
        if(ans != INT_MAX){
            mini = min(mini,ans+1); // We have added this condition because if ans = INT_MAX, INT_MAX + 1 will g out of bounds
        }
        cout<< "Mini : " << mini << endl;
    }

    return mini;
}

int main(){

    vector<int>v {1,2,3};
    int target = 5;

    int ans = solve(v,target);
    cout << ans << endl;
    return 0;
}