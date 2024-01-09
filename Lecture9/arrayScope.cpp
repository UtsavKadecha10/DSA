#include<iostream>
using namespace std;
 
void updateArray(int arr[], int size){
    cout<<"Inside function"<<endl;
    
    // updating array
    arr[0]=120; 
    /*
    IMPORTANT!!!
    So, when we "update array" in any function the original array also gets updated that is different from the case of variables, because here, arr signifies the name as well as the "address of the first location" of the array.
    Hence, applying "pass by reference" concept the original array also gets updated.
    */

    // printing array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"Going back to main function"<<endl;
}
int main(){
    int arr[3]={1,2,3};

    updateArray(arr, 3);
    
    cout<<"Printing array in the main function"<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
