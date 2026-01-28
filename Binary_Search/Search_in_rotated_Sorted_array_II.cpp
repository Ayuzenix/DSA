#include<bits/stdc++.h>
using namespace std;

// Problem:Search in rotated Sorted array
// Platform:Leetcode

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                low++;
                high--;
            }
            else if(nums[low]<=nums[mid]){//-->Left part Sorted
            if(nums[low]<=target && nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
            }else{
                if(nums[high]>=target && nums[mid]<target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return false; //-->No such Element found
    }
};
