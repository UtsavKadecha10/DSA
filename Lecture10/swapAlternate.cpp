#include<iostream>
#include<algorithm>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        swap(arr[i], arr[i+1]);
    }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6}; 
    int size = 6;
    swapAlternate(arr, size);
    printArray(arr, size);
    return 0;
}
