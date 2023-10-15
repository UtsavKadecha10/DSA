// 7. Reverse Integer
#include<iostream>
using namespace std;

int reverse(int x) {
    int digit, num;
    long r=0;
    while(x!=0){
        digit=x%10;
        r=r*10 + digit;
        x=x/10;
    }
    return int(r);
}

int main(){
    int x=123;
    reverse(x);
    return 0;
}
