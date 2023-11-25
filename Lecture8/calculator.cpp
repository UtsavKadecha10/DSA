#include<iostream>
using namespace std;

int main(){
    int a, b, result;

    cout<<"Enter 1st No.: ";
    cin>>a;
    
    cout<<"Enter 2nd No.: ";
    cin>>b;
    
    char op;
    cout<<"Enter the operation you want to perform on a and b(+,-,/,*): ";
    cin>>op;

    switch(op){
        case '+': 
            cout<<a+b;
            break;
        case '-': 
            cout<<a-b;
            break;
        case '*': 
            cout<<a*b;
            break;
        case '/': 
            cout<<a/b;
            break;
        default:
            cout<<"Not a valid operation!";
    }

    return 0;
}
