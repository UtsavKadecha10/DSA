#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findPivotInArray(vector<int> &arr, int size){
    // Time Complexity O(logn)
    int s=0, e=size-1;
    int mid = s + (e - s) / 2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(vector<int> &arr, int s, int e, int key){
    int n = arr.size();
    int mid= s + ( e - s )/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}
int searchInRotatedSortedArray(vector<int> &arr, int n, int k)
{
    int pivot = findPivotInArray(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}


int main()
{
    vector<int> arr = {7,9,10,2,3};
    int n = arr.size(); 
    int k; 
    cin>>n;
    int index = searchInRotatedSortedArray(arr, n, k);
    cout<<index;
    return 0;
}
