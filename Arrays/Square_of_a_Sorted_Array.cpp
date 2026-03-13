#include<bits/stdc++.h>
using namespace std;

// Problem:Square of a Sorted Array
// Platform:Leetcode

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
           int n=nums.size();
           int l=0,r=n-1,idx=n-1;
           vector<int>store(n,0);
           while(idx>=0){
            if(abs(nums[l])==abs(nums[r])){
               store[idx]=nums[r]*nums[r];
               r--;
            }else if(abs(nums[r])>abs(nums[l])){
                store[idx]=nums[r]*nums[r];
                r--;
            }else {
                if(abs(nums[l])>abs(nums[r])){
                    store[idx]=nums[l]*nums[l];
                    l++;
                }
            }
            idx--;
           }
           return store;
    }
};
