#include<iostream>
using namespace std;

int findPivotInArray(int *arr, int size){
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
    return arr[s];


    // Time complexity: O(n)
    // int pivot=-1, i=0;
    // while(i<size){
    //     if(arr[i]>arr[i+1]){
    //         pivot=arr[i+1];
    //         break;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // return pivot;
}
int main()
{
    int arr[]={7,9,10,2,3};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int element = findPivotInArray(arr, arrSize);
    cout<<"Pivot Element is: "<<element<<endl;
    return 0;
}
