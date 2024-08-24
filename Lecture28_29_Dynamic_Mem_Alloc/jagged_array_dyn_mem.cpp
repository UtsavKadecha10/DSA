#include<bits/stdc++.h>
using namespace std;
int main()
{
    //static
    // int row1[] = {1,2,3,4};
    // int row2[] = {5,6};
    // int row3[] = {0,8,9};

    // int* jagged[] = {row1, row2, row3};
    // int sizes[] = {4,2,3};

    // for(int i=0; i<3; i++){
    //     int *ptr = jagged[i];
    //     // for ith row having sizes[i] no. of columns
        
    //     for(int j=0; j<sizes[i]; j++){
    //         cout<<*(ptr+j)<<" ";
    //         // *ptr have base address, adding j means access jth element for particular(ith) row 
    //     }
    //     cout<<endl;
    // }

    // Dynamic
    int row, col;
    cout<<"Enter No. of rows: ";
    cin>>row;
    int ** arr = new int*[row];
    int sizes[] = {4,2,3};
    for(int i=0; i<row; i++){
        // *(arr+i) = new int[sizes[i]]; // IMPORTANT

        //OR

        for(int j=0; j<sizes[i]; j++){
            arr[j] = new int[sizes[i]];
        }  
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<sizes[i]; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<sizes[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
