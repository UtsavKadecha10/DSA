#include<iostream>
#include<algorithm>
using namespace std;

void reverseArray(int arr[], int size){
    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size-1-i]);
    }

    // OR

    // int start=0;
    // int end=size-1;
    // while(start<=end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}
