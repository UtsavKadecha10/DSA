#include<bits/stdc++.h>
using namespace std;

int array_sum(int *arr, int size){
    if(size == 0){
        return 0;
    }
    int sum = arr[0];
    return sum + array_sum(arr+1, size-1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    cout<<"Sum of array is: "<<array_sum(arr, size);
    return 0;
}
