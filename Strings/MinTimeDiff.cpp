//https://leetcode.com/problems/minimum-time-difference/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<string> Totaltime{"00:00","23:59"};

    vector<int> minutes;
    for(string str : Totaltime){
            int totalMin = 0;
            int hours = stoi(str.substr(0,2))*60;
            int mins = stoi(str.substr(3,2));
            totalMin = hours + mins;
            minutes.push_back(totalMin);
    }

    sort(minutes.begin(), minutes.end());

    int diff = INT_MAX;
    for(int i = 0;i < minutes.size()-1;i++){
        diff = min(diff,minutes[i+1] - minutes[i]);
    }

//    cout << minutes.back() << endl;
    diff = min(diff, (minutes[0]+1440 - minutes.back()));

    cout << diff << endl;
    return 0;
}