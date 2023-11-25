#include<iostream>
#include<math.h>
using namespace std;

bool powerOfTwo(int n){
    cout<<"Enter No. ";
    cin>>n;
    int x=0;
    while(x<=30){
        if(n==pow(2,x)){
            return true;
        }
        else{
            x++;
        }
    }
    return false;
}
int main(){
    int n;
    bool result = powerOfTwo(n);
    cout<<result;
    return 0;
}
