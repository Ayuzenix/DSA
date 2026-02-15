#include<bits/stdc++.h>
using namespace std;

// Problem:Next Greater Element-II
// Platform:Leetcode
// Approach:Cicularly Traversing Concept Involved

class Solution {
public: //-->Circularly Traversing Concept Involved
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>result=nums;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--){
            int k=i%n;
            while(!st.empty() && nums[k]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                result[k]=-1;
                st.push(nums[k]);
            }else {
                if(!st.empty() && nums[k]<st.top()){
                    result[k]=st.top();
                    st.push(nums[k]);
                }
            }
        }
        return result;
    }
};
