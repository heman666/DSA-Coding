#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void findPossibilities(int dices,int faces, int target, int& totalPossibilities){
    if(target < 0) return;
    if(dices == 0 && target != 0){
        return;
    }
    if(dices != 0 && target == 0){
        return;
    }
    if(dices == 0 && target == 0){
        totalPossibilities += 1;
        return;
    }

    for(int j = 1;j <= faces; j++) {
        findPossibilities(dices-1,faces,target-j,totalPossibilities);
    }
}

int main(){

    int dices = 2;
    int faces = 2;
    int target = 4;

    int totalPossibilities = 0;

    findPossibilities(dices,faces,target,totalPossibilities);

    cout << totalPossibilities << endl;
    return 0;
}
