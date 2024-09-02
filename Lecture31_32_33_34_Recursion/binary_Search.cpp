#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    if(s>e){
        return false;
    }
    int mid = s + (e - s)/2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
}

int main()
{
    int arr[] = {3,4,5,6,7,8};
    int key = 10;
    int res = binarySearch(arr, 0, 5, key);
    if(res){
        cout<<"Element present"<<endl;
    }
    else{
        cout<<"Element not present"<<endl;
    }
    return 0;
}
