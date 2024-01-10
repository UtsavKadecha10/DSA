/*
VERY IMPORTANT!!!!!
https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> arrayIntersection(vector<int> &arr1, vector<int> &arr2, int n, int m){
    vector<int> ans;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
    
}
void printArray(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> arr1={1,2,3,4,5,6};
    vector<int> arr2={1,3,5,7,9};
    int size1=6, size2=5;
    vector<int> result = arrayIntersection(arr1, arr2, size1, size2);
    printArray(result);
    return 0;
}
