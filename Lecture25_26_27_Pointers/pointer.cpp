// QUESTIONS
// https://www.naukri.com/code360/guided-paths/pointers

// int *p = &num;

// p is a pointer to int 'num'
// * is dereference operator

#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     /*
//     int num=10;
//     int *p = &num;
//     cout<<num++<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl; 
//     cout<<"Size of integer is "<<sizeof(num)<<endl;
//     cout<<"Size of pointer is "<<sizeof(p)<<endl;
//     */

//     /*
//     // pointer to int is created and is pointing to some garbage value
//     // int *ptr = 0; // null pointer
//     // cout<<*ptr<<endl; //give segmentation fault while accessing

//     int i = 5;
//     int *q = &i;
//     cout<<q<<endl;
//     cout<<*q<<endl;

//     int *ptr = 0;
//     ptr = &i; // don't use *ptr = &num;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     */


//     /*
//     // incrementing a pointer
//     int num = 5;
//     int a = num;
//     cout<<"num before a++: "<<num<<endl;
//     a++;
//     cout<<"num after a++: "<<num<<endl;

//     int *p = &num;
//     cout<<"num before (*p)++: "<<num<<endl;
//     (*p)++;
//     cout<<"num after (*p)++: "<<num<<endl;
//     return 0;
//     */

//     /*
//     // copying a pointer
//     int num = 5;
//     int *p = &num;
//     int *q=p;
//     cout<<p<<" - "<<q<<endl;
//     cout<<*p<<" - "<<*q<<endl;
//     */

//     // important concept
//     int i=3;
//     int *t = &i;
//     // cout<<++(*t)<<endl;
//     *t=*t+1; // this increments value at address stored in t.
//     cout<<*t<<endl;
//     cout<<"before t: "<<t<<endl;
//     t=t+1; // increment t according to the datatype, if int gets incremented by its size i.e 4 bytes
//     cout<<"after t: "<<t<<endl;
// }
int main() {
    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * p1, * p2;
    char * p3;
    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue
    * p1 = 10; // value pointed to by p1 = 10
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2; // p1 = p2 this means that now p1 is now pointing to the same address as p2
    cout<<p1<<" - "<<*p1<<endl;
    cout<<p2<<" - "<<*p2<<endl;
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    cout<<endl;
    * p1 = 20; // value pointed to by p1 = 20

    cout<<p1<<" - "<<*p1<<endl;
    cout<<p2<<" - "<<*p2<<endl;
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    cout<<endl;
    
    * p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    return 0;
}
