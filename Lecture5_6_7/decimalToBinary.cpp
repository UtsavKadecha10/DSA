#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int n){
    float ans=0;
    int bit;
    int i=0;
    while(n!=0){
        // 1st Approach
        bit=n%2;
        ans=(bit*pow(10, i))+ans;
        n=n/2;
        i++;
                
        // 2nd Approach
        // bit=n&1;
        // ans=(bit*pow(10, i))+ans;
        // n=n>>1;
        // i++;
    }
    return ans; 
}
int main(){
    int n=5;    
    int res = decimalToBinary(n);
    cout<<res;
    return 0;
}
