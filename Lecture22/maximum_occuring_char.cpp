// https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// EK array lenge 26 size ka jisme store karenge count saare alphabets ka.....at start count for each alphabet will be 0, as we traverse the string we will increase the count for each alphabet as we find it.
// Now we find the maximum element in that array and store the corresponding index 

#include<bits/stdc++.h>
using namespace std;

class Solution
{

    public:
    int arr[26]={0};
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        // creating an array count of characters
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            int index = 0;
            index = ch - 'a';
            arr[index]++;
        }

        // finding max occ char.
        int maxi = -1, ans = 0;
        for(int i=0; i<26; i++){
            if(maxi < arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        
        return 'a'+ans; 
    }

};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
    return 0;
}
