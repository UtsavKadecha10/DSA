#include<iostream>
#include<list>
using namespace std;
int main()
{   
    list<int> l;

    list<int> n(l); //copies l to n;
    // all other element same as vector and deque

    // erase and access element function takes O(n) time complexity
    return 0;
}
