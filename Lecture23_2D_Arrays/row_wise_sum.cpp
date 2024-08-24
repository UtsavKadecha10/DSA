#include<bits/stdc++.h>
using namespace std;
// int rowSum(int arr[][3], int row){
//     int sum = 0;
//     for(int i=0; i<3; i++){
//         sum = sum + arr[row][i];
//     }
//     return sum;
// }
int largestRowSum(int arr[][3], int row, int col){
    int largestSum = INT_MIN;
    int sum, index=-1;
    for(int i=0; i<row; i++){
        sum=0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum>largestSum){
            largestSum = sum;
            index=i ;
        }
    }
    cout<<"Largest Row sum is: "<<largestSum<<endl;
    return index;
}
int main(){
    int arr[3][3] = {{1,2,3}, {7,8,9}, {4,5,6}};
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    // cout<<"Sum of row 1 is: "<<rowSum(arr, 0)<<endl;
    // cout<<"Sum of row 2 is: "<<rowSum(arr, 1)<<endl;
    // cout<<"Sum of row 3 is: "<<rowSum(arr, 2)<<endl;
    int ansIndex = largestRowSum(arr, 3, 3);
    cout<<"Largest Row sum is at Index: "<<ansIndex;
    return 0;
}
