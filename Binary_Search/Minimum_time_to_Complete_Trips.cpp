#include<bits/stdc++.h>
using namespace std;

// Problem:Minimum time to Complete Trips
// Platform:Leetcode

class Solution {
public:
    long long solve(vector<int>&time,long long k){
        long long n=time.size();
        long long count=0;
        for(int i=0;i<n;i++){
            count=count+(long long)k/time[i];
        }
        return count;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
         long long n=time.size();
         long long low=1;
         long long mini=INT_MAX;
         for(int i=0;i<n;i++){
            if(time[i]<mini){
                mini=time[i];
            }
         }
         long long high=(long long)mini*(long long)totalTrips;
         long long newr=high;
         long long ans=-1;
         while(low<=high){
            long long mid=low+(high-low)/2;
            if(solve(time,mid)>=totalTrips){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
         }
         if(ans==-1){
            return newr;
         }
         return ans;
    }
};
