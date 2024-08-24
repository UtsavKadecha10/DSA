#include<iostream>
using namespace std;
int main() {
    //dynamic memory allocation.
    int * p = (int * ) malloc(sizeof(int));
    
    //after calling free() p becomes a dangling pointer
    free(p);

    //now p no more a dangling pointer.
    p = NULL;
    return 0;
}
