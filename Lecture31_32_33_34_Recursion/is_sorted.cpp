#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool ans = isSorted(arr+1, size-1);
    return ans;

}

int main()
{
    int arr[] = {3,4,5,6,10,18};
    bool res = isSorted(arr, 6);
    if(res){
       cout<<"Array is sorted"<<endl; 
    }
    else{
        cout<<"Array is not Sorted"<<endl;
    }
    
    return 0;
}
