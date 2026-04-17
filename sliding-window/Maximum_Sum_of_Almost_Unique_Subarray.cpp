#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum sum of Almost Unique Subarray 
// Platform : Leetcode 

class Solution {
public: // Concept involved -->>>> distinct element will equal size of map 
    long long maxSum(vector<int>& nums, int m, int k) {
         long long maxsum = 0 , currsum = 0 , l = 0 , r = 0 ;
         int n = nums.size() ;
         unordered_map<int,int>mp ;
         while ( r < n ) {
            mp[nums[r]] ++ ;
            currsum = currsum + nums[r] ;
            if ( ( r - l + 1 ) > k ) {
                currsum = currsum - nums[l] ;
                mp[nums[l]] --;
                if ( mp[nums[l]] == 0 ) {
                    mp.erase( nums[l] ) ;
                }
                l ++ ;
            }
            if ( ( r - l + 1 ) == k ) {
                 if ( mp.size() >= m) {
                    maxsum = max( maxsum , currsum ) ;
                 }
            }
            r ++ ;
         }
         return maxsum ;
    }
};
