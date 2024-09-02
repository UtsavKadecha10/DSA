#include<bits/stdc++.h>
using namespace std;

bool linearrSearch(int *arr, int size, int key){
    if(size == 0){
        return false;
    }
    int element =  arr[0];
    if(element == key){
        return true;
    }
    bool ans = linearrSearch(arr+1, size-1, key);
    return ans;
}
int main(){
    int arr[] = {3,1,8,4,2,5};
    int key = 10;
    int res = linearrSearch(arr, 6, key);
    if(res){
        cout<<"Element present";
    }
    else{
        cout<<"Element not present";
    }
    return 0;
}
