#include<bits/stdc++.h>
using namespace std;

// Problem:Container with Most Water 
// Platform:Leetcode

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=INT_MIN;
        int l=0;
        int r=n-1;
        while(l<r){
            int mini=min(height[l],height[r]);
            maxi=max(maxi,mini*(r-l));
            if(height[l]==height[r]){
                 l++;
                 r--;
            }else if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxi;
    }
};
