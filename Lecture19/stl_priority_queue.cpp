// First element will be the greatest

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // Max Heap
    priority_queue<int> maxh;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minh;

    maxh.push(1);
    maxh.push(2);
    maxh.push(3);
    maxh.push(4);

    int n = maxh.size();
    for(int i=0; i<n; i++){
        cout<<maxh.top()<<" ";
        maxh.pop();
    }

    minh.push(1);
    minh.push(2);
    minh.push(3);
    minh.push(4);

    int m=minh.size();
    cout<<endl;
    for(int i=0; i<m; i++){
        cout<<minh.top()<<" ";
        minh.pop();
    }
    return 0;
}
