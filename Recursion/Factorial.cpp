#include<iostream>

using namespace std;

int factorial(int n){
    if(n < 0){
        return 0;
    }
    else if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout << "Enter the number for which you want to find the factorial: ";
    cin >> n;

    cout << factorial(n) << endl;


    return 0; 
}