#include<iostream>
#include<math.h>

using namespace std;

int main(){
       int a = -6;
   a = a*-1;
   a = ~a;
   a += 1;
   int i = 0;
   long int ans = 0;
   while(a != 0){
       int bit = a&1;
       ans = (pow(10,i)*bit) + ans;
       a = a >> 1;
       i++;
   }
    
    cout << ans;
    return 0;

}