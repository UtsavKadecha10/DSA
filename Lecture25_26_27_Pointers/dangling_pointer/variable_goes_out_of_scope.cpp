#include<iostream>
using namespace std;
void main() {
    int * ptr;
    //any code statements
    {   int ch;
        ptr = & ch;
    }

    // Here ptr is dangling pointer
}
