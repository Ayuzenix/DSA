#include <bits/stdc++.h>
using namespace std;

// Problem: Remove Duplicates from Sorted Array
// Platform: LeetCode
// Time: O(n)
// Space: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count = 1;

        while (r < n) {
            if (l < r && nums[l] != nums[r]) {
                nums[l + 1] = nums[r];
                l++;
                count++;
            }
            r++;
        }
        return count;
    }
};
