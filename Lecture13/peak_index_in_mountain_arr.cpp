#include<iostream>
using namespace std;

int peakIndexInMountainArray(int *arr, int size){
    int low=0, high=size-1, i=0, peak;
    while(i<size){
        if(arr[i]<=arr[i+1]){
            i++;
        }
        else{
            peak=arr[i];
            break;
        }
    }
    return peak;
}
int peakIndexInMountainArray(int *arr, int size) {  //LEETCODE SOLUTION
    int s=0, e=size-1;
    int mid = s + (e - s)/2;
    while(s<e){
        if(arr[mid]<=arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[] = {0,5,3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = peakIndexInMountainArray(arr, size);
    cout<<element;
    return 0;
}
