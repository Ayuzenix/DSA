#include<bits/stdc++.h>
using namespace std;

// Problem:Minimum Speed to Arrive At time 
// Platform:leetcode

class Solution {
public:
    double solve(vector<int>&dist,int k){
        int n=dist.size();
        double count=0;
        for(int i=0;i<dist.size();i++){
            if(i==n-1){
                count=count+(double)dist[i]/k;
            }else {
                if(dist[i]%k==0){
                    count=count+(int)dist[i]/k;
                }else{
                    count=count+(int)dist[i]/k+1;
                }
            }
        }
        return count;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        int ans=-1;
        int low=1;
        int high=1e7;
        while(low<=high){
            int mid=(low+high)/2;
            if(solve(dist,mid)<=hour){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
