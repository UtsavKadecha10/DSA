#include<bits/stdc++.h>
using namespace std;
int main()
{
    // INTEGER ARRAY
    int arr[5]={10,20,30,40,50};
    int *ptr = arr;
    int *ptr2 = ptr+3;
    cout<<*ptr2<<endl;
    cout<<ptr2-ptr; 
    //Prints the address of the first location of the array.
    // cout<<"Address of array 'arr' is "<<arr<<endl;  
    // cout<<"Address of array 'arr0' is "<<&arr[0]<<endl;

    // // Prints address of rest of the elements by increment by 4 bytes.
    // cout<<"Address of array 'arr1' is "<<&arr[1]<<endl;
    // cout<<"Address of array 'arr2' is "<<&arr[2]<<endl;
    // cout<<"Address of array 'arr3' is "<<&arr[3]<<endl;
    // cout<<"Address of array 'arr4' is "<<&arr[4]<<endl;

    // //doubt: how is this possible?
    // // cout<<"Address of array 'arr5' is "<<&arr[5]<<endl; 
    // // cout<<"Address of array 'arr6' is "<<&arr[6]<<endl;

    // // Prints the value present at the given index, for eg. *arr = arr[0], *(arr+1) = arr[1] and so on....
    // // this basically gives out the conclusion that arr[i] = *(arr+i)
    // // therefore it can even be written as  i[arr] = *(i+arr), which will give exactly the same resultsss!!!
    // // IMPORTANT CONCEPT: arr[i] = i[arr]
    // cout<<*(arr+1)<<endl;  

    // // Increments the value by 1
    // cout<<*arr+1<<endl; 

    // // Creating a pointer to access the values of the array.
    // int *a = &arr[0];
    // cout<<*(a+1)<<endl;

    // // -----------------------------------------------------------------------------------------------------------

    // // CHARACTER ARRAY
    // char ch1[5] = {'a','b','c','d','e'};
    // char ch2[5] = "qrst";
    // // we can observe that cout works differently for char and int arrays as for int it prints the address with arr_name whereas for char_name it prints the char array itself.
    // cout<<ch1;
    // cout<<ch2<<endl;

    // char *c = &ch1[0];
    // // now this does not prints the address, instead it prints the entire char array.
    // cout<<c;
    // cout<<*c<<endl; //this does the same functionality as it did before

    
    // char temp = 'z';
    // char *p = &temp;   
    // cout<<*p<<endl; // shows normal behaviour
    // cout<<p<<endl; // IMPORTANT! : this will keep printing garbage value((incrementing by 4(size))) until it finds a null character.
    return 0;
}
