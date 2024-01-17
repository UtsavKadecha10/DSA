#include<iostream>
#include<algorithm>
using namespace std;

void sort01(int arr[], int n){ //n=size
    // 2pointer approach
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else{
            if(arr[j]==0){
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
            else{
                j--;
            }
        }
    }
}
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr[7]={0,1,1,0,1,0,1};
    int size=7;
    sort01(arr, size); 
    printArray(arr, size);
    return 0;
}
