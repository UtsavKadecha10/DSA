// Given an integer n find the product and sum of its digits
#include<iostream>
using namespace std;

void prod_sum(int n){
    int digit;
    int sum=0;
    int prod=1;

    while(n!=0){
        digit = n%10;
        prod =prod * digit;
        sum = sum + digit;
        n = n/10;
    }
    cout<<"Product will be: "<<prod<<endl;
    cout<<"Sum will be: "<<sum<<endl;
}
int main(){
    int n=234;
    prod_sum(n);
    return 0;
}
