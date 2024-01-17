/*
Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
https://www.codingninjas.com/studio/problems/sort-0-1-2_631055
*/

#include<iostream>
#include<algorithm>
using namespace std;

void sort012(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[i]==1){
            if(arr[j]==0){
                swap(arr[i], arr[j]);
                i++;
                j=n-1;
            }
            else{
                j--;
            }
        }
        else{
            if(arr[j]==1){
                swap(arr[i], arr[j]);
                i=0;
            }
            else if(arr[j]==0){
                swap(arr[i], arr[j]);
                i++;
            }
            else{
                j--;
            }
        }
    }

}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={2,1,0,2,1,1,2};
    int size=7;
    sort012(arr, size);
    printArray(arr,size);
    return 0;
}
