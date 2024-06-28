/*
Also known as 3Sum
https://www.codingninjas.com/studio/problems/triplet-with-given-sum_893028
Solution - https://youtu.be/lxzJxiZtv8U?feature=shared
*/

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	set<vector<int>>visited;
	vector<vector<int>>ans;
    for (int i=0; i<n-2; i++){
        for (int j=i+1; j<n-1; j++){
            for (int k=j+1; k<n; k++){
                // If we find a valid triplet.
                if (arr[i]+arr[j]+arr[k]==K) {
                    vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);
                    // Sorting the triplet track distinct triplets.
                    sort(triplet.begin(), triplet.end());
                    if (visited.find(triplet) == visited.end()) {
                        ans.push_back(triplet);
                        visited.insert(triplet);
                    }
                }
            }
        }
    }
    return ans;
}
int main(){
    
    return 0;
}
