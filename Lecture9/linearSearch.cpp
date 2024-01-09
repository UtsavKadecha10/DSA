#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[6]={10, 2, 30, 41, -1, 23};
    int size = 6;
    int num;
    cout<<"Enter No. to be found: ";
    cin>>num;
    int result = linearSearch(arr, size, num);
    if(result == -1){
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"Element found at "<<result<<" index."<<endl;
    }
    return 0;
}
