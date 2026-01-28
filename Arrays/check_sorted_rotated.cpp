#include <bits/stdc++.h>
using namespace std;

// Problem: Check if Array Is Sorted and Rotated
// Platform: LeetCode
// Time: O(n)
// Space: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int length = nums.size();
        int count = 0;

        for(int i = 0; i < length; i++){
            if(nums[i] > nums[(i + 1) % length]){
                count++;
            }
        }

        return count <= 1;
    }
};
