#include<bits/stdc++.h>
using namespace std;

// Problem:Trapping rain Water (brute force solution)
// Platform:Leetcode,TakeUForward

class Solution {
public:
    int prevmaxi(vector<int>&height,int x){
        int ans=-1;
        for(int i=x;i>=0;i--){
            ans=max(ans,height[i]);
        }
        return ans;
    }
    int nextmaxi(vector<int>&height,int x){
        int ans=-1;
        for(int i=x;i<height.size();i++){
            ans=max(ans,height[i]);
        }
        return ans;
    }
    int trap(vector<int>& height) {
        int sum=0;
        for(int i=0;i<height.size();i++){
            int left_side=prevmaxi(height,i);
            int right_side=nextmaxi(height,i);
            int maxi=min(left_side,right_side);
            if(maxi!=-1){
                sum=sum+(maxi-height[i]);
            }
        }
        return sum;
    }
};
