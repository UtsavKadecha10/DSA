// Time complexity: logn
// only works on monotonic functions i.e. elements should be sorted.

#include<iostream>
using namespace std;
int binarySearch(int *arr, int key, int n){
    int low=0, high=n-1, mid;
    mid= low+(high-low)/2; // Very impo step, if we use mid = (low+high)/2 and the value of low and high is 2^31-1, the value goes beyond the range of int that is not accepted, therefore this solution.
    while(low<=high){
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
            high = mid - 1;
        }
        else{
            low=mid+1;
        }
        mid= low+(high-low)/2;
    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,5,6,8};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int index=binarySearch(arr, key, arrSize);
    if(index==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"Index at which element is present is: "<<index;
    }
    return 0;
}
