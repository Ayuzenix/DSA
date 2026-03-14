#include<bits/stdc++.h>
using namespace std;

// Problem:Product of Array Except Self
// Platform:Leetcode

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int n=nums.size();
           vector<int>pre(n,0);
           int pos=1;
           for(int i=0;i<n;i++){
            pre[i]=pos;
            pos*=nums[i];
           }
           vector<int>post(n,0);
           int pr=1;
           for(int i=n-1;i>=0;i--){
            post[i]=pr;
            pr*=nums[i];
           }
           for(int i=0;i<n;i++){
            nums[i]=pre[i]*post[i];
           }
           return nums;
    }
};
