#include<iostream>
using namespace std;

// 1-> Prime, 0-> Not Prime.
bool isPrime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return 0;                          
        } 
        i++;
    }
    return 1;
}
int main(){
    int n; 
    cout<<"Enter No.: ";
    cin>>n;
    if(isPrime(n)){  
        cout<<"Is a Prime No.";
    }
    cout<<"Not a Prime No.";
    return 0;
}
