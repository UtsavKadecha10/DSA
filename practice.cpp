/*
Have the function PlusMinus(num) read the num parameter being passed which will be a combination of 1 or more single digits, and determine if it's possible to separate the digits with either a plus or minus sign to get the final expression to equal zero. 
For example: if num is 35132 then it's possible to separate the digits the following way, 3 - 5 + 1 + 3 - 2, and this expression equals zero. Your program should return a string of the signs you used, so for this example your program should return -++-. If it's not possible to get the digit expression to equal zero, return the string not possible. 
If there are multiple ways to get the final expression to equal zero, choose the one that contains more minus characters. For example: if num is 26712 your program should return -+-- and not +-+-. 
Sample Test Cases: 
Input: 199 Output: not possible 
Input: 26712 Output: -+--
*/
#include <iostream>
#include <string> 
#include <vector>

using namespace std;

// Define backtrack function outside of PlusMinus
// bool backtrack(int index, int total, const string& digits, vector<char>& signs) {
//     if (index == digits.size()) {
//         return total == 0;
//     }

//     signs[index] = '+';
//     if (backtrack(index + 1, total + (digits[index] - '0'), digits, signs)) {
//         return true;
//     }

//     signs[index] = '-'; 
//     if (backtrack(index + 1, total - (digits[index] - '0'), digits, signs)) {
//         return true;
//     }

//     signs[index] = ' ';
//     return false;
// }


bool backtrack(int index, int total, const string& digits, vector<char>& signs) {
    if(index == digits.size()) {
        return total == 0;
    }

    signs[index] = '-';
    if(backtrack(index + 1, total - (digits[index] - '0'), digits, signs)) {
        return true;
    }

    signs[index] = '+';
    if(backtrack(index + 1, total + (digits[index] - '0'), digits, signs)) {
        return true;
    }
       
    signs[index] = ' ';
    return false;
}

string PlusMinus(int num) {
    string digits = to_string(num); 
    vector<char> signs(digits.size(), ' ');
    if (backtrack(1, digits[0] - '0', digits, signs)) {
        string result;
        for (char sign : signs) {
            result += sign;
        }
        return result;
    } else {
        return "not possible";
    }
}

int main() {
    // Test cases
    int num;
    cin>>num;
    cout << PlusMinus(num) << endl;
    return 0;
}
