// When a new vector is created Size and Capacity is 0
// Capacity gets twice when a new element has to be added to the vector and the capacity is already full.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    vector<pair<int, int>> vec; //refer stl_pair.cpp


    vector<int> a(5, 2); //5->size, 1->Initializes all elements with 1
    for(int i:a){
        cout<<i;
    }cout<<endl;

    vector<int> b(a); //copies elements of a in b;
    for(int i:b){
        cout<<i;
    }cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl; //0
    cout<<"Size: "<<v.size()<<endl;         //0

    v.push_back(1); 
    cout<<"Capacity: "<<v.capacity()<<endl; //1
    cout<<"Size: "<<v.size()<<endl;         //1

    v.push_back(4); 
    cout<<"Capacity: "<<v.capacity()<<endl; //2
    cout<<"Size: "<<v.size()<<endl;         //2

    v.push_back(7); 
    cout<<"Capacity: "<<v.capacity()<<endl; //4
    cout<<"Size: "<<v.size()<<endl;         //3

    v.push_back(9); 
    cout<<"Capacity: "<<v.capacity()<<endl; //4
    cout<<"Size: "<<v.size()<<endl;         //4

    v.push_back(10); 
    cout<<"Capacity: "<<v.capacity()<<endl; //8     //Denotes the space assigned for the elements
    cout<<"Size: "<<v.size()<<endl;         //5     //Denotes no. of elements present
    
    cout<<"\nPrinting V: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl<<endl;

    // Same access operation as STL arrays.

    // clear() : size becomes 0, but the capacity still remains constant;
    cout<<"Capacity before clear(): "<<v.capacity()<<endl; //8
    cout<<"Size before clear(): "<<v.size()<<endl; //5
    v.clear();
    cout<<"Capacity after clear(): "<<v.capacity()<<endl; //8
    cout<<"Size after clear(): "<<v.size()<<endl; //0

     
    return 0;
}

// int i=0;
//     while(i<arr.size()){
//         if(i<=m){
//             i++;
//         }
//         else{
//             for(int j=m+1; j<(arr.size()-m)/2; j++){
//                 swap(arr[j], arr[(arr.size()-m)-1-j]);
//             } 
//             i++;
//         }     
//     }

// 


