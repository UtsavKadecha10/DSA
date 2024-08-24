// https://leetcode.com/problems/move-zeroes/

#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeroes(vector<int>& nums) {
    int n=nums.size(), k=0;
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            nums[k++]=nums[i];
            // swap(nums[i], nums[k]);
            // k++; // Now no need to use the second loop for printing zeros
        }
    }
    for(int i=k; i<n; i++){
        nums[i]=0;
    }

    // OR!
    
    // for(int i=0; i<n; i++){
    //     if(nums[i]!=0){
    //         swap(nums[i], nums[k]);
    //         k++; // Now no need to use the second loop for printing zeros
    //     }
    // }
    return nums;
}
void print_arr(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> nums = {0,1,0,3,12};
    vector<int> v = moveZeroes(nums);
    print_arr(nums);   
    return 0;
}
