// Time Complexity: Best: O(n) and worst: O(n^2)
// Space Complexity: O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    bool swapped = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
                swapped = true; 
            }
        }
        if(swapped == false){
            break;
        }
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
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    print_arr(arr);
    bubbleSort(arr);
    print_arr(arr);
    return 0;
}
