#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Sum of Distinct Subarray of Sum K 
// Platform : Leetcode 

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp ;
        int l = 0 ;
        int r = 0 ;
        long long maxsum = 0 ;
        long long currsum = 0 ;
        while ( r < nums.size() ) {
            mp[nums[r]] ++ ;
            currsum = currsum + nums[r] ;
            while ( ( r - l + 1 ) > k ) {
                currsum = currsum - nums[l] ;
                mp[nums[l]] -- ;
                if ( mp[nums[l]] == 0) {
                    mp.erase( nums[l] ) ;
                }
                l ++ ;
            }
            if ( ( r - l + 1 ) == k && mp.size() == k ) {
                maxsum = max ( maxsum , currsum ) ;
            }
            r ++ ;
        }
        return maxsum ;
    }
};
