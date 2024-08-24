#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;
    // Insert, erase, find, count -> O(logn) 
    // map-> O(logn)(because of red black tree/balanced) for search
    // unordered_map -> O(1) for search.
    m[1] = "Hi";
    m[2] = "Hello";
    m[3] = "Bye";

    m.insert({5, "NO"});

    for(auto i:m){
        cout<<i.first<<":"<<i.second<<endl;
    }cout<<"\n";

    cout<<"Finding 5 -> "<<m.count(5)<<endl;

    // m.erase(3);
    cout<<"After Erase: \n";
    for(auto i:m){
        cout<<i.first<<":"<<i.second<<endl;
    }cout<<"\n";

    auto it = m.find(3);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}
