// Input: Size of array as well as array.
#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int sum = sumArray(arr, size);
    cout<<"Sum of elements of array is: "<<sum<<endl;
    return 0;
}
