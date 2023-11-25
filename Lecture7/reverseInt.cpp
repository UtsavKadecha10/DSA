// 7. Reverse Integer
#include<iostream>
using namespace std;

int reverse(int x) {
    long ans=0;
    while(x!=0){
        int digit=x%10;
        if(ans>(INT16_MAX/10)|| ans<(INT16_MIN/10)){
            return 0;
        }
        ans=ans*10 + digit;
        x=x/10;
    }
    return int(ans);
}

int main(){
    int x=123;
    int result = reverse(x);
    cout<<result;
    return 0;
}
