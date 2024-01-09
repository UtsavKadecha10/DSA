/*
ARRAY   
-set of similar type of type
-contiguous memory allocation 
-can be accessed using indexes
*/

#include<iostream>
using namespace std;

int main(){
    // int arr[5]={2,6,4,8,10}; //Declaration and Definition
    /*
    arr denotes name of the array as well as address of the base location.
    */
    // cout<<arr[0];
    // int homework[10000]={0}; //Iss case me puri array me 0 aajaega
    // int homework[10000]={1};  // Lekin iss case me sirf first element 1 hoga baaki 0
    // So, how to add same element in complete array except 0?
    int homework[10000];
    fill_n(homework, 10000, 1); //using this function.
    for(int i=0; i<10000; i++){
        // cout<<homework[i];
    }

    int array[15] = {2,4}; //if array me elements size ke according nhi bhare, jesa iss situation me hai, to remaining elements 0 hojaege automatically.
    for(int i=0; i<15; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
