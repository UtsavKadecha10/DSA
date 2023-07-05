#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=2; i<n; i=i+2){
        sum=sum+i;
    }
    // int i=2;
    // while(i<n){
    //     sum=sum+i;
    //     i=i+2;
    // }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}
