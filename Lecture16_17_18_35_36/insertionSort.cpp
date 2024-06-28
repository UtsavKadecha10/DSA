#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    // vector<int> nums(arr.size());
    // nums[0] = arr[0];
    for(int i=1; i<arr.size(); i++){
        int temp = arr[i], j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{break;}
        }
        arr[j+1]=temp;

    }
}

void print_arr(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {7, 8, 1, 5, 2, 6};
    cout<<"Unsorted Array: ";
    print_arr(arr);
    insertionSort(arr);
    cout<<"Sorted Array : ";
    print_arr(arr);
    return 0;
}
