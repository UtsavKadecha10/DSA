#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Hi");
    s.push("Hello");
    s.push("Bye");
    cout<<"Top Element->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element after 1 pop->"<<s.top()<<endl;
    return 0;
}
