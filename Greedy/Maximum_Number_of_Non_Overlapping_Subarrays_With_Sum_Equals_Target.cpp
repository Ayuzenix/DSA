#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Non-Overlapping Subarrays With Sum Equals Target
// Platform : Leetcode 

class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        int n = nums.size() , countSubarrays = 0 ;
        unordered_map<int,int>mp1 ;
        unordered_map<int,int>mp ;
        mp1[0] ++ , mp = mp1 ;
        int currSum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            currSum = currSum + nums[i] ;
            if ( mp.find( currSum - target ) != mp.end() ) {
                countSubarrays ++ , currSum = 0 ;
                mp = mp1 ;
            } else {
                mp[currSum] ++ ;
            }
        }
        return countSubarrays ;
    }
};
