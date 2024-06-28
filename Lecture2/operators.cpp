//BITWISE OPERATORS
// Left-shift Operator(<<)
//   4 = 0100
//   4<<1 = 1000 = 8
//   formula: a<<n ----> a*2^n

// Right-shift Operator(>>)
//   4 = 0100
//   4>>1 = 0010 = 2
//   formula: a>>n ----> a/2^n

#include<iostream>
using namespace std;
int main()
{
    int a=4, l, r;
    l=4<<1;
    r=4>>1;
    cout<<"Left Shift: "<<l;
    cout<<"Right Shift: "<<r;
    return 0;
}
