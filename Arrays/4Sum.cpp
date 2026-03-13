#include<bits/stdc++.h>
using namespace std;

// Problem:4Sum
// Platform:Leetcode

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
          set<vector<int>>mp;
          int n=nums.size();
          for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                    long long sum=(long long)nums[l]+(long long)nums[r]+(long long)nums[j]+(long long)nums[i];
                    if(sum==target){
                        mp.insert({nums[l],nums[r],nums[j],nums[i]});
                        l++;
                        r--;
                    }else if(sum>target){
                        r--;
                    }else{
                        l++;
                    }
                }
            }
          }
          vector<vector<int>>result;
          for(auto&it:mp){
            result.push_back(it);
          }
          return result;
    }
};
