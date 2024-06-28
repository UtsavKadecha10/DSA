#include<iostream>
#include<set>
using namespace std;
int main()
{   
    set<int> s;
    // insert(), find(), erase(), count() -> O(logn)
    // size(), begin(), end(), empty() -> O(1)
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(7);
    s.insert(7);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    // set<int>::iterator it = s.begin();
    // it++;
    // s.erase(it);
    // s.erase(s.begin());

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not: "<<s.count(5);
    cout<<"\n1 is present or not: "<<s.count(1);
    cout<<endl;

    set<int>::iterator itr = s.find(4);
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    return 0;
}
