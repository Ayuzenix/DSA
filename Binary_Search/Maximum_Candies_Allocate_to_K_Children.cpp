#include<bits/stdc++.h>
using namespace std;

// Problem:Maximum Candies Allocated to K children
// Platform:Leetcode

class Solution {
public:
    long long solve(vector<int>&candies,int k){
        long long count=0;
        for(int i=0;i<candies.size();i++){
            count=count+(long long)candies[i]/k;
        }
        return count;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n=candies.size();
        int low=1;
        int high=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++){
            if(candies[i]>high){
                high=candies[i];
            }
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(solve(candies,mid)>=k){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
