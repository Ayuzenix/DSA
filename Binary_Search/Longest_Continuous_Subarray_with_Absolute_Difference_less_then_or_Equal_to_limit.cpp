#include<bits/stdc++.h>
using namespace std;

// Problem:Longest continuous subarray with absolute difference less then or equal to limit (brute force approach -->optimal approach is by using dequeue will solve soon)
// Platform:Leetcode 

class Solution {
public:
    int solve1(vector<int>& nums,int i,int j){
        int max_element=INT_MIN;
        for(int k=i;k<=j;k++){
            if(nums[k]>max_element){
                max_element=nums[k];
            }
        }
        if(max_element==INT_MIN){
            return 0;
        }
        return max_element;
    }
    int solve2(vector<int>& nums,int i,int j){
        int min_element=INT_MAX;
        for(int k=i;k<=j;k++){
            if(nums[k]<min_element){
                min_element=nums[k];
            }
        }
        if(min_element==INT_MAX){
            return 0;
        }
        return min_element;
    }
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        int l=0,r=0,maxlen=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        while(r<n){
              if(nums[r]>maxi){
                maxi=nums[r];
              }
              if(nums[r]<mini){
                mini=nums[r];
              }
              while(l<=r && abs((maxi)-(mini))>limit){
                if(nums[l]==maxi){
                    maxi=solve1(nums,l+1,r);
                }
                if(nums[l]==mini){
                    mini=solve2(nums,l+1,r);
                }
                l++;
              }
              maxlen=max(maxlen,(r-l+1));
              r++;
        }
        return maxlen;
    }
};
