#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "Hi";
    m[2] = "Hello";
    m[3] = "Bye";

    m.insert({5, "NO"});
    for(auto i:m){
        cout<<i.first<<":"<<i.second<<endl;
    }cout<<"\n";

    cout<<"Finding 5 -> "<<m.count(5)<<endl;
    return 0;
}
