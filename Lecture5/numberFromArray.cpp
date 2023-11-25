// To create a number from an array
#include<iostream>
using namespace std;

int number(int* arr){
    int ans=0;
    for(int i=0; i<3; i++){
        ans=(ans*10)+arr[i];    //main logic
    }
    return ans;
}
int main(){
    int arr[]={1, 2, 3};
    int result = number(arr);
    cout<<result;
    return 0;
}
