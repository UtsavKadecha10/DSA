#include<bits/stdc++.h>
using namespace std;

void toh(int n, int src, int help, int dest){
    vector<int> v;
    if(n==0){
        return;
    }
    return toh(n-1, src, dest, help);
    v.push_back(src, dest);
    return toh(n-1, help, src, dest);
}

int main()  
{
    
    return 0;
}

