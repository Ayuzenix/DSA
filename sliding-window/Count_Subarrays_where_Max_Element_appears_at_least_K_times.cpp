#include<bits/stdc++.h>
using namespace std;

// Problem:Count Subarrays where Maximum Elements appears at least k times
// Platform:Leetcode

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
         long long n=nums.size();
         long long l=0,r=0,arr_count=0;
         long long  maxi=INT_MIN;
         for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
         }
         unordered_map<int,int>mp;
         while(r<n){
            if(nums[r]==maxi){
                mp[maxi]++;
            }
            while(mp[maxi]>=k){
                arr_count=arr_count+(n-r);
                if(nums[l]==maxi){
                    mp[maxi]--;
                }
                l++;
            }
            r++;
         }
         return arr_count;
    }
};
