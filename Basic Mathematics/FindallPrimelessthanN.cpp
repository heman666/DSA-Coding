//Sieve of Eratosthene

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    vector<bool> prime(n,true);
    prime[0] = false;
    prime[1] = false;

    int ans = 0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;

            int j = i*2;
            while(j<n){
                prime[j] = false;
                j += i;
            }
        }
    }
    cout << endl;

    cout << "Ans: " << ans << endl;

    return 0;
}