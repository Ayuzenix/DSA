#include<bits/stdc++.h>
using namespace std;

// Problem:Minimum Number of Days to Make m Bouquets
// Platform:Leetcode
class Solution {
public:
    long long solve(vector<int>& bloomDay,int gama,long long  m,long long  k){
        long long  count=0;
        long long  consecutive=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=gama){
               consecutive++;
               if(consecutive==k){
                count++;
                consecutive=0;
               } 
            }else{
                consecutive=0;
            }
        }
        return count;
    }
    int minDays(vector<int>& bloomDay, long long m, long long k) {
        long long  n=bloomDay.size();
        long long multiplication=m*k;
        if(multiplication>n){
            return -1;
        }
        long long  low=1;
        long long  maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(bloomDay[i]>maxi){
                maxi=bloomDay[i];
            }
        }
        long long high=maxi;
        long long ans=-1;
        // Now our binary Search Range is from low to high (meaning from 1 to max element of bloomDay)
        while(low<=high){
            long long mid=(low+high)/2;
            if(solve(bloomDay,mid,m,k)>=m){
               ans=mid;
               high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
