//To solve the question using recursion, we need to understand that to reach the nth stair, there are only 2 ways. 
//Either from n-1 or from n-2. therefore f(n) = f(n-1) + f(n-2)

#include<iostream>

using namespace std;

int stairCase(int n){
    if(n == 0 || n == 1){//We are giving f(0) as 1 because the person is starting from 0th level and there is one posibility for that to happen
        return 1;
    }
    return stairCase(n-1) + stairCase(n-2);
}

int main(){
    int n = 10;

    cout << stairCase(n);

    return 0;
}