#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int n){
    int i=0;
    int ans=0;
    while(n!=0){   
        int digit=n%10;
        if(digit==1){
            ans = ans + pow(2, i);
        }   
        n=n/10;
        i++;
    }
    return ans;
}
int main(){
    int n=10101;  
    int result = binaryToDecimal(n);
    cout<<result;
    return 0;
}
