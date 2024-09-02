#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==5){
        return;
    }
    cout<<n<<" "; // 0 1 2 3 4 : head recursion
    print(n+1);
    // cout<<n<<" "; // 4 3 2 1 0 : tail recursion
}
int main()
{   
    print(1);
    return 0;
}
