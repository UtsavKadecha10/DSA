#include<bits/stdc++.h>
using namespace std;

string replace_spaces(string s){
    string temp="";
    int k=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
            // s[k++]='@';
            // s[k++]='4'; 
            // s[k++]='0';
        }
        else{
            temp.push_back(s[i]);
            // s[k++]=s[i];
        }
    }
    return temp;
}

int main()
{
    string s = "Hello hello hello";
    cout<<replace_spaces(s);
    return 0;
}
