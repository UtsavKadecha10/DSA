#include<iostream>
using namespace std;

int sort01(int arr[], int n){ //n=size
    // 2pointer approach
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
    }

}

int main()
{
    int arr[7]={0,1,1,0,1,0,1};
    int size=7;
    int res=sort01(arr, size); 
    return 0;
}
