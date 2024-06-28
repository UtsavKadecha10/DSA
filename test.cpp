#include<bits/stdc++.h>
using namespace std; 

int reverseNum(int n){
    string num = to_string(n);
    int length = num.length();
    int ans=0, i=0;
    while(n>0){
        int digit = n%10;
        ans = ans + digit*pow(10, length-i-1);
        i++;
        n=n/10;
    }
    return ans;
}
void beautifulDays(int i, int j, int k) {
    int diff, count=0; 
    // int b = j-i;
    // k = k%b;
    for(int a=i; a<=j; a++){
        if(a>reverseNum(a)){
            diff=a-reverseNum(a);
            cout<<a<<"-"<<reverseNum(a)<<": ";
            cout<<diff<<endl;
            if(diff%k==0){
                count++;
            }
        }
        else{
            diff=reverseNum(a)-a;
            cout<<reverseNum(a)<<"-"<<a<<": ";
            cout<<diff<<endl;
            if(diff%k==0){
                count++;
            }
        }
        // diff = a>reverseNum(a)?a-reverseNum(a):reverseNum(a)-a;
        // if(diff%k==0){
        //     count++;
        // }
    }
    cout<<endl;
    cout<<count;
}
int main(){
    int i, j, k;
    cin>>i>>j>>k;
    beautifulDays(i,j,k);
    // cout<<days;
    
    return 0;
}
