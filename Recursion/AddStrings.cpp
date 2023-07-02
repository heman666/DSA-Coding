#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>
using namespace std;

string addStrings(string& num1,string& num2,int m, int n, int carry){
    if(m < 0 && n < 0){
        return carry > 0 ? string(1,carry+'0') : "";
    }

    int n1 = (m >= 0 ? num1[m] : '0') -'0';
    int n2 = (n >= 0 ? num2[n] : '0') -'0';
    int csum = n1 + n2 + carry;
    int digit = csum%10;
    carry = csum/10;

    string ans = "";
    ans.push_back(digit + '0');

    ans += addStrings(num1,num2,m-1,n-1,carry);

    return ans;
}


int main(){
    string num1  = "123";
    string num2 = "156";
    int m = num1.length()-1;
    int n = num2.length()-1;
    cout << m << " " << n << endl;
    string sum = addStrings(num1,num2,m,n,0);
    reverse(sum.begin(), sum.end());
    cout << sum << endl;
    return 0;
}