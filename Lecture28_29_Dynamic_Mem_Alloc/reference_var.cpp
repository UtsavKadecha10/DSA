#include<bits/stdc++.h>
using namespace std;

void updateByValue(int n){  //pass by value
    n++;
}
void updateByReference(int &n){ // pass by reference 
    n++;
}
int main()
{
    /*
    int i = 5;
    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    // cout<<&i<<endl;
    // cout<<&j<<endl;
    */
   int n = 5;
   cout<<"PASS BY VALUE"<<endl;
   cout<<"Before: "<<n<<endl;
   updateByValue(n); //copy of a value is passed therefore original value is not updated. New memory is allocated for the copy
   cout<<"After: "<<n<<endl;
   cout<<endl;
   cout<<"PASS BY REFERENCE"<<endl;
   cout<<"Before: "<<n<<endl;
   updateByReference(n); //address of the value is passed therefore orginal value is also updated. No new memory is allocated.
   cout<<"After: "<<n<<endl;
    return 0;
}
