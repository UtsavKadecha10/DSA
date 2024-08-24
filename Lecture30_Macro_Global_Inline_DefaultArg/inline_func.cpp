#include<bits/stdc++.h>
using namespace std;
inline int getMax(int& a, int& b){
    return a>b?a:b;
}
int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a,b); // by using inline keyword, the compiler replaces getMax(a,b) by a>b?a:b just before compilation therefore performance increases, no function call overhead...
    cout<<ans<<endl;

    a=a+3;
    b=b+1;

    ans = getMax(a,b);
    cout<<ans<<endl;
    return 0;
}
