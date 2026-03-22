#include<bits/stdc++.h>
using namespace std;

// Problem:Kth Missing Positive Integer
// Platform:Leetcode

class Solution {
public: 
    int toCount(vector<int>&arr,int mid){
        int n=arr.size();
        int count=0;
        int j=0;
        for(int i=1;i<=mid;i++){
            if((j<n && i!=arr[j]) || j>=n ){
                count++;
            }else {
                if(j<n && i==arr[j]){
                    j++;
                }
            }
        }
        return count;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=1;
        int high=arr[n-1]+k;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(toCount(arr,mid)==k){
               ans=mid;
               high=mid-1;
            }
            if(toCount(arr,mid)>k){
                high=mid-1;
            }else {
                if(toCount(arr,mid)<k){
                    low=mid+1;
                }
            }
        }
        return ans;
    }
};
