#include<bits/stdc++.h>
using namespace std;

vector<int> digits(int n){
    vector<int> res;
    while(n!=0){
        int digit = n%10;
        res.push_back(digit);
        n = n/10;
    }
    return res;
}

void convert(int n){
    string word;
    if(n==0){
        return;
    }
    int num = n%10;
    switch(num){
        case 0:
            word = "Zero";
            break;
        case 1:
            word = "One";
            break;
        case 2:
            word = "Two";
            break;
        case 3:
            word = "Three";
            break;
        case 4:
            word = "Four";
            break;
        case 5:
            word = "Five";
            break;
        case 6:
            word = "Six";
            break;
        case 7:
            word = "Seven";
            break;
        case 8:
            word = "Eight";
            break;
        case 9:
            word = "Nine";
            break;
        default:
            word = "Undefined";
            break;
    }
    convert(n/10);
        cout<<word<<" ";

}

// string say_digits(int n){
//     if(n==0){
//         return "Zero";
//     } 
//     int num = ;
//     string word = convert(num);
//     return word;
    
// }

int main()
{
    int n;
    cin>>n; 
    cout<<n<<" is equal to ";
    convert(n);
    return 0;
}
