#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n, int start=0){ //start with right most argument...right to left
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    print(arr, size);
    cout<<endl;
    print(arr, size, 3);    
    return 0;
}
