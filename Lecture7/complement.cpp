// Complement of Base 10 integer
#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int n){
    float binary=0;
    int bit;
    int i=0;
    while(n!=0){
        bit=n%2;
        binary=(bit*pow(10, i))+binary;
        n=n/2;
        i++;
    }
    return binary;
}
int bitwiseComplement(int i) {
    int n = decimalToBinary(i);
    int m = n;
    // cout<<m;
    int mask=0;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    // cout<<();
    int ans = (~n)&mask;
    return ans;
}
int main(){
    int i = 5, mask;
    // int result = bitwiseComplement(i);
    // cout<<~i;
    // cout<<result;
    cout<<~i;
    
    return 0;
}
