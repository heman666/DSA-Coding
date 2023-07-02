#include<iostream>
#include<vector>

using namespace std;

void printAllSubArrays(vector<int>& v, int start, int end){
    if(start >= v.size()){
        return;
    }
    else if(end == v.size()){
        printAllSubArrays(v,start+1,start+1);
    }
    else{
        for(int i = start;i<=end;i++){
            cout << v[i] << " ";
        }
        cout << endl;
        printAllSubArrays(v,start,end+1);
    }

}

int main(){

    vector<int> v{1,2,3};
    printAllSubArrays(v,0,0);
    return 0;
}