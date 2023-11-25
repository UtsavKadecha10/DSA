#include<iostream>
using namespace std;

int prod_sum(int n){
    int ans=0;
    cin>>n;
    while(n!=0){
        ans=n%2;
        n=n/10;
    }
    return n;
}
int main(){



    return 0;
}
