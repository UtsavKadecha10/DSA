#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int lengthOf(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main()
{   
    char str[] = "Utsav";
    cout<<lengthOf(str);
    return 0;
}
