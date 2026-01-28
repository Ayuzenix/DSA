#include<bits/stdc++.h>
using namespace std;

// Problem: Rotate Array
// Platform: LeetCode
// Time: O(n * k)
// Space: O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        while(k--){
            int last=nums[n-1];
            for(int i=n-1;i>=1;i--){
                nums[i]=nums[i-1];
            }
            nums[0]=last;
        }
        return ;
    }
};
