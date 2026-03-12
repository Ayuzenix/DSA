#include<bits/stdc++.h>
using namespace std;

// Problem:Merge Sorted Array
// Platform:Leetcode

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int l=0;
         for(int i=m;i<m+n;i++){
            nums1[i]=nums2[l++];
         }
         sort(nums1.begin(),nums1.end());
         return ;
    }
};
