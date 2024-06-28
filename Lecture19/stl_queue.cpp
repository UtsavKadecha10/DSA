#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Hi");
    q.push("Hello");
    q.push("Bye");

    cout<<"First Element->"<<q.front()<<endl;
    q.pop();
    cout<<"First Element after 1 pop->"<<q.front()<<endl;
    return 0;
}
