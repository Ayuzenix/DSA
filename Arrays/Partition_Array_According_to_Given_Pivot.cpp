#include<bits/stdc++.h>
using namespace std;

// Problem:Partition Array According to Given Pivot
// Platform:Leetcode

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
           int n=nums.size();
           vector<int>store(n,0);
           int l=0;
           for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                store[l]=nums[i];
                l++;
            }
           }
           for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                store[l++]=nums[i];
            }
           }
           for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                store[l++]=nums[i];
            }
           }
           return store;
    }
};
