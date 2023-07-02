#include<iostream>

using namespace std;

// void printRecursive(int arr[],int n,int size){
//     if(n == size){
//         return;
//     }
//     cout << *arr << " ";
//     printRecursive(arr+1,n+1,size);
// }

void printRecursive(int arr[],int n){
    if(n == 0){
        return;
    }
    cout << *arr << " ";
    printRecursive(arr+1,n-1);
}


int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n << endl;
    // printRecursive(arr,0,n);
    printRecursive(arr,n);
    return 0;
}