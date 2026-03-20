#include<bits/stdc++.h>
using namespace std;

// Problem:Aggressive Cows
// Platform:Leetcode

class Solution {
public:
    bool isPossible(vector<int>&nums,int mid,int k){
         long long n=nums.size();
         long long count=1;
         long long prev=nums[0];
         for(int i=1;i<n;i++){
             if(nums[i]-prev>=mid){
                prev=nums[i];
                count++;
             }
         }
         return (count>=k);
    }
    int aggressiveCows(vector<int> &nums, int k) {
        long long n=nums.size();
        sort(nums.begin(),nums.end());
        long long low=1;
        long long high=nums[n-1]-nums[0];
        int ans;
        while(low<=high){
            long long mid=(low+high)/2;
            if(isPossible(nums,mid,k)==true){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
