#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Size of the array"<<endl;
    cin>>n;

    // variable size array
    int* arr = new int[n];

    //taking input in array
    cout<<"Enter Elements of the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum of the array is: "<<getSum(arr, n);

    return 0;
}
