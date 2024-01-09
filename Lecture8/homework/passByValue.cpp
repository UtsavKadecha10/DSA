#include<iostream>
using namespace std;

void value(int n){
    n++;
    cout<<"n is "<<n<<endl;
}

void reference(int &n){
    n++;
    cout<<"n is"<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    value(n);
    cout<<"Number n is "<<n<<endl;
    return 0;
}
/*
ye jo apan kr rhe hai isse "pass by value" kehte hai.
jo apna variable hai uski copy pass hoti hai function me
but, if we use void dummy(int &n), to ye '&n' ka mtlb uss variable ka reference pass ho rha hai
or isse hum "pass by reference" kehte hai.
*/
