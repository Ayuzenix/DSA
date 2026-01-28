#include <bits/stdc++.h>
using namespace std;

// Problem: Move Zeroes
// Platform: LeetCode
// Time: O(n)
// Space: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] != 0) {
                swap(nums[l], nums[r]);
                l++;
            }
        }
    }
};
