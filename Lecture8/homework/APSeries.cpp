// AP 3*n+7
#include<iostream>
using namespace std;

int APSeries(int n){
    int nth;
    cout<<"Enter No. of terms: ";
    cin>>n;
    nth=3*n+7;
    return nth;
}
int main(){
    int n;
    int result = APSeries(n);
    cout<<result;
    return 0;
}
