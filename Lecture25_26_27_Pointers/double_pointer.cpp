#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    // change? - NO

    // *p2 = *p2 + 1;
    // change? - p changes -> +4bytes 

    **p2 = **p2 + 1;
    // change? - i changes -> +1
}
int main()
{
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    // cout<<"Address of i: "<<p<<endl;
    // cout<<"Value of i: "<<*p<<endl;
    // cout<<"Address of p: "<<p2<<endl;
    // cout<<"Value of p: "<<*p2 <<endl;
    cout<<**p2<<endl;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p2<<endl;

    return 0;
}
