#include<bits/stdc++.h>
using namespace std;

// Problem:Find the smallest Divisor given an Threshold
// Platform:Leetcode

class Solution {
public:
    int solve(vector<int>& nums,int m){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%m==0){
                sum=sum+nums[i]/m;
            }else{
                sum=sum+nums[i]/m+1;
            }
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        //Now our range is from one to maxi;
        int high=maxi;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(solve(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
