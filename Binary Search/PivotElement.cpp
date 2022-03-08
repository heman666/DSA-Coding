#include<iostream>

using namespace std;

int PrintPivotElement(int arr[],int n){
    int l=0,r=n-1;
    while(l < r){
        int m = l + (r-l)/2;
        if(arr[m] > arr[0]){
            l = m + 1;
        }else{
            r = m;
        }
    }
    return arr[r];
}

int main(){
    int arr[6] = {4,5,6,1,2,3};
    cout << PrintPivotElement(arr,6);
    return 0;
}