#include<iostream>
using namespace std;

int power(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int result = power();
    cout<<"a^b: "<<result;
    return 0;
}
