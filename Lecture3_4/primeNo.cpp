#include<iostream>
using namespace std;

void primeNo(int x){
    
    int n=2;
    int flag=0;
    while(n<x){
        if(x%n==0){
            cout<<"Not Prime";
            flag=1;
            break;
        }
        n++;
    }
    if(flag==0){
        cout<<"Prime";
    }
}
int main(){
    int x;
    cout<<"Enter No.: ";
    cin>>x;
    primeNo(x);
    return 0;
}
