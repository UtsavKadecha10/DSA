#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][col]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,1,2,3};
    // OR
    // int arr[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    
    // taking input -> row wise input
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row][col];
        }
    }

    // taking input -> col wise input
    // for(int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[row][col];
    //     }
    // }

    // output
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found!"<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
    return 0;
}
