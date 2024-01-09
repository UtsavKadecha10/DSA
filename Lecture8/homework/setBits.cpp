// Given two nos. find total setBits(no. of 1) in A and B
#include<iostream>
#include<math.h>
using namespace std;

int countSetBits(int a, int b){
    int bitCount = 0;
    int bit;
    while(a!=0){
        bit=a%2;
        if(bit==1){
            bitCount++;
        }
        a=a/2;
    }
    while(b!=0){
        bit=b%2;
        if(bit==1){
            bitCount++;
        }
        b=b/2;
    }
    return bitCount;
}
int main(){
    int a,b; 
    cout<<"Enter two nos.: ";
    cin>>a>>b;
    int result = countSetBits(a,b);
    cout<<result;
    return 0;
}
