#include <iostream>
using namespace std;
int main() {
    void * ptr;
    int i = 10;
    // assign int address to void
    ptr = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << ptr <<  endl;
    // cout << "Value of variable i is " << *ptr <<  endl; // we cannot do this as void pointer cannot be dereferenced
    //pointer arithmetic is also not possible on void pointers due to lack of concrete values and size.
    return 0;
}
// Output:
// Address of variable i 0x7ffc848c25f4
// Address where the void pointer is pointing 0x7ffc848c25f4
