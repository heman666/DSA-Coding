#include<iostream>

using namespace std;

int fibonacci(int n){
    if(n==1 || n==2){
        // cout << n << " ";
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int printFibonacci(int n){
    if(n==1 || n==2){
        cout << n-1 << " ";
        return n-1;
    }
    cout << printFibonacci(n-1) + printFibonacci(n-2) << " "; 
    return printFibonacci(n-1) + printFibonacci(n-2);

}

int main(){
    int n = 5;
    cout << fibonacci(n);
    printFibonacci(n);
    return 0;
}