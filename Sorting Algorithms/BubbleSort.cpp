//Best Case : O(N)
//Worst Case : O(N^2)

#include<iostream>
#include<vector>


using namespace std;

void PrintVector(vector<int>v, int n){
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void BubbleSort(vector<int>& v,int n){
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++){ //As for each ith iteration, ith largest number is getting sorted to its right place. 
                        //As sorting n-1 elements means the remaining 1 element is also sorted, we run n-1 loops.
        swapped = false;//Swapped is to check if the array is sorted in btwn loops so that we can exit early.
        for(j=i;j<n-i-1;j++){// Here we kept n-i-1 as we know that we are comparing the element to its next element,
                             //to avoid any errors when j is the last element.   
            if(v[j] > v[j+1]){ // -i because we know that the last i elements would be sorted.So we don't include them
                swap(v[j],v[j+1]);
                swapped=true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){

    vector<int> v;
    int n;

    cout << "Enter the number of elements:";
    cin >> n;

    int elem;
    for(int i=0;i<n;i++){
        cin >> elem;
        v.push_back(elem);
    }

    return 0;
}
