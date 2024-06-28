#include<iostream>
using namespace std;

int firstOcc(int *arr, int n, int key){
    int start=0, end=n-1;
    int ans=-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOcc(int *arr, int n, int key){
    int start=0, end=n-1, ans=-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int arr[] = {1,3,3,3,3,5}; // should be a sorted array.
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int first = firstOcc(arr, arrSize, key);
    int last = lastOcc(arr, arrSize, key);
    cout<<"First occurence of "<<key<<" is at Index: "<<first<<endl;
    cout<<"Last occurence of "<<key<<" is at Index: "<<last<<endl;

    int totalOcc; // TO FIND THE TOTAL OCCURENCE OF ANY ELEMENT
    if(first==-1 && last==-1){
        totalOcc = 0;
    }
    else{
       totalOcc = (last - first) + 1;
    }
    cout<<"Total no. of occurence of "<<key<<" is: "<<totalOcc<<endl;
    return 0;
}
