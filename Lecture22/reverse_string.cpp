#include<bits/stdc++.h>
using namespace std;

void reverse(char str[], int n){
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }

    // OR
    
    // int i=0;
    // int e=n-1;
    // while(i<=e){
    //     swap(str[i++],str[e--]);
    // }
}

void print_arr(char str[], int n){
    for(int i=0; i<n; i++){
        cout<<str[i]<<"";
    }
    cout<<endl;
}
int main()
{
    char str[] = "Utsav";
    int len = 5;
    reverse(str, len);
    print_arr(str, len);
    return 0;
}
