#include<bits/stdc++.h>
using namespace std;

// Problem:Book Allocation Problem
// Platform:TakeUForward/GeeksForGeeks
// Time Complexity:O(Nlog(maxi))

class Solution {
public:
    long long toAllocated(vector<int>&nums,int mid){
         long long count=1;
         long long curr=nums[0];
         long long n=nums.size();
         for(int i=1;i<n;i++){
            if(curr+nums[i]>mid){
                count++;
                curr=nums[i];
            }else {
                curr=curr+nums[i];
            }
         }
         return count;
    }
    int findPages(vector<int> &nums, int m)  {
        long long n=nums.size();
        long long maxi=0;
        for(int i=0;i<n;i++){
            maxi=maxi+nums[i];
        }
        long long low=1;
        long long high=maxi;
        long long ans=-1;
        while(low<=high){
            long long mid=(low+high)/2;
            if(toAllocated(nums,mid)<=m){
                ans=mid;
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
        return ans;
    }
};
