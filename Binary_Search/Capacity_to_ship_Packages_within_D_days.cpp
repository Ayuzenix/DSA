#include<bits/stdc++.h>
using namespace std;

// Problem:Capacity to ship Packages within D days
// Platform:Leetcode

class Solution {
public:
    int solve(vector<int>& weights,int m){
        int day=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]<=m){
                load=load+weights[i];
            }else{
                load=weights[i];
                day++;
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(weights[i]>maxi){
                maxi=weights[i];
            }
            sum=sum+weights[i];
        }
        //Now our range is from maxi to sum
        int low=maxi;
        int high=sum;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(solve(weights,mid)<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
