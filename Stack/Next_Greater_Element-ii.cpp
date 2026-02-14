#include<bits/stdc++.h>
using namespace std;

// Problem:Next Greater Element (circular concept Involved)
// Platform:Leetcode ,TakeUForward

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>result=nums;
        stack<int>st;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--){
            int gama=i%n;
            while(!st.empty() && nums[gama]>=st.top()){
                st.pop();
            }
            if(!st.empty() && nums[gama]<st.top()){
                result[gama]=st.top();
                st.push(nums[gama]);
            }else{
                if(st.empty()){
                    result[gama]=-1;
                    st.push(nums[gama]);
                }
            }
        }
        return result;
    }
};
