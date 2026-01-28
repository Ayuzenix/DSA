#include<bits/stdc++.h>
using namespace std;

// Problem: Find First and Last Position of Element in Sorted Array
// Approach: Linear Scan
// Time: O(n)
// Space: O(1)
// Note: Brute-force / initial approach

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int st=-1;
        int end=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if(st!=-1){
                    end=i;
                }else{
                    st=i;
                    end=i;
                }
            }
        }
        return {st,end};
    }
};
