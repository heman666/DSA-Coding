#include<iostream>

using namespace std;


// void printNumbers(int& num){
//     if(num == 0){
//         return;
//     }
//     cout << num%10 << " ";
//     int val = num/10;
//     printNumbers(val);
// }

void printNumbers(int& num){
    if(num == 0){
        return;
    }
    int val = num/10;
    printNumbers(val);
    cout << num%10 << " ";
      
}

int main(){

    int num = 647;
    printNumbers(num);

    return 0;
}