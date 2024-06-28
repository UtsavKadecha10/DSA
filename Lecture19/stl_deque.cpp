#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d; //NOT DEQUEUE, its a different thing this is for pushing and poping elements from an array like structure.
    d.push_back(2);
    d.push_back(2);
    d.push_front(1);
    d.push_front(3);

    for(int i:d){
        cout<<i<<" ";
    }cout<<"\n";

    // d.pop_back();
    // d.pop_front();

    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<"\n";

    cout<<"Size before erase(): "<<d.size()<<endl; //0
    d.erase(d.begin(), d.begin()+1);
    cout<<"Size after erase(): "<<d.size()<<endl; //0

    d.clear();
    // cout<<"Capacity after clear(): "<<d.capacity()<<endl;  Deque has no capacity.
    cout<<"Size after clear(): "<<d.size()<<endl; //0
    
    return 0;
}
