#include<bits/stdc++.h>
#include<string>
#include <cctype>
using namespace std;

char  toLower(char x){
    if(x>='a' && x<='z'){
        return x;
    }
    else{
        return x -'A' +'a';
    }
} 
bool isValid(char x){
    if((x>='a'&& x<='z') || (x>='A'&& x<='Z') || (x>='0'&& x<='9')){
        return 1;
    }
    return 0;
}
bool checkPalindrome(string s){
    int i=0, e=s.length()-1;
    while(i<=e){
        if(s[i]!=s[e]){
            return false;
            break;
        } 
        i++;
        e--;
    }
    return true;
}
bool isPalindrome(string s){
    //faltu character hatao
    string temp = "";
    for (int i=0; i<s.length(); i++) {
        if(isValid(s[i])){
            temp.push_back(s[i]);
        }
    }
    // lower me convert kro
    for(int i=0; i<temp.length(); i++){
        temp[i] = toLower(temp[i]);
    }
    return checkPalindrome(temp);
}
int main()
{
    string str = "A man, a plan, a canal: Panama";
    bool check = checkPalindrome(str);
    // cout<<check;
    if(check){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
