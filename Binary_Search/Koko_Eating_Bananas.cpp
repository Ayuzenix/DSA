#include<bits/stdc++.h>
using namespace std;

// Problem:Koko Eating Bananas
// Platform:Leetcode
class Solution {
public:
    long long  solve(vector<int>& piles,int m){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%m==0){
                count=count+piles[i]/m;
            }else{
                count=count+piles[i]/m+1;
            }
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       long long maxi=INT_MIN;
       long long ans=0;
       for(int i=0;i<piles.size();i++){
        if(piles[i]>maxi){
            maxi=piles[i];
        }
       }
       //-->Our range for answer is from 1 to maxi
       int low=1;
       int high=maxi;
       while(low<=high){
        int mid=(low+high)/2;
        if(solve(piles,mid)<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
       }
       return ans;
    }
};
