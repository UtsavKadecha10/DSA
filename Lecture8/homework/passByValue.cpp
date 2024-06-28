#include<iostream>
using namespace std;

int value(int n){   //copy of the value changes but the original doesnot.
    n++;
    return n;
}

int reference(int &n){  // original value also changes.
    n++;
    return n;
}

int main(){
    int n;
    cin>>n;
    cout<<"Pass By Value: "<<value(n)<<endl;
    cout<<n<<endl;
    cout<<"Pass By Reference: "<<reference(n)<<endl;
    cout<<n<<endl;
    return 0;
}
/*
ye jo apan kr rhe hai isse "pass by value" kehte hai.
jo apna variable hai uski copy pass hoti hai function me
but, if we use void dummy(int &n), to ye '&n' ka mtlb uss variable ka reference pass ho rha hai
or isse hum "pass by reference" kehte hai.
*/
