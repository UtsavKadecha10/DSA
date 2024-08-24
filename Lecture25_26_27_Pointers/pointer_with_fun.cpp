#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout<<p<<endl;  // prints address
    cout<<*p<<endl; // prints value 
}
void update(int *p){
    *p = *p + 1; // value can be updated like this but...
    p = p + 1; //address cannot be updated using this function. value will be updated only in this scope and outside of it, it will remain same.
}

int getSum(int *arr, int n){
    cout<<endl<<sizeof(arr)<<endl; // this denotes the size of the pointer and not the array, as in case of array whenever ve pass it in a function pointer is passed always.
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    // print(p);

    cout<<"Before value: "<<*p<<endl;
    cout<<"Before address: "<<p<<endl;
    update(p);
    cout<<"After value: "<<*p<<endl;
    cout<<"After address: "<<p<<endl;

    int arr[5]  = {10, 20, 30, 40, 50};
    cout<<"Sum is: "<<getSum(arr, 5)<<endl;
    return 0;
}
