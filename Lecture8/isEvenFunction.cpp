#include<iostream>
using namespace std;

// 1->Even, 0->Odd
bool isEven(int n){
    if(n&1){    //kisi no. ka &1 true hota hai to voh odd no. hota hai.
        return 0; 
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    int result=isEven(n);
    cout<<result;
    return 0;
}
