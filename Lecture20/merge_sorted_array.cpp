// https://leetcode.com/problems/merge-sorted-array/

// The below solution is not the one for the above mentioned question.
#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> v;
    int i=0, j=0; 
    while(i<m  && j<n){
        if(nums1[i]<nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]>nums2[j]){
            v.push_back(nums2[j]);
            j++;
        }
        else if(nums1[i]==nums2[j]){
            v.push_back(nums1[i]);
            v.push_back(nums2[j]);
            i++;
            j++;
        }
    }
    if(i==m){
        while(j<n){
            v.push_back(nums2[j]);
            j++;
        }
    }
    if(j==n){
        while(i<m){
            v.push_back(nums1[i]);
            i++;
        }
    }
    return v;
}
void print_arr(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> nums1 = {1,3,5,7,9};
    vector<int> nums2 = {2,4,6};
    vector<int> res = merge(nums1, nums1.size(), nums2, nums2.size());
    print_arr(res);
    return 0;
}
