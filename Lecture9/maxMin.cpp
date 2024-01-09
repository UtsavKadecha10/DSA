#include<iostream>
using namespace std;

int getMin(int num[], int size){
    int min = INT16_MAX;
    for(int i=0; i<size; i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}

int getMax(int num[], int size){
    int max = INT16_MIN;
    for(int i=0; i<size; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    int maximum = getMax(num, size);
    int minimum = getMin(num, size);

    cout<<"Maximum: "<<maximum<<endl;
    cout<<"Minimum: "<<minimum<<endl;
    return 0;
}
