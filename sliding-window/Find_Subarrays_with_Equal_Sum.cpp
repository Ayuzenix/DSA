#include<bits/stdc++.h>
using namespace std ;

// Problem : Find Subarrays with Equal Sum 
// Platform : Leetcode 

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int>mp ; 
        int l = 0 , r = 0 , sum = 0 ; 
        while ( r < n ) {
             while ( l < r && ( ( r - l + 1 ) > 2 ) ) {
                sum = sum - nums[l] ;
                l ++ ;
             }
             sum = sum + nums[r] ;
             if ( ( r - l + 1 ) == 2 && mp.find( sum ) != mp.end() ) {
                 return true ; 
             } 
             if ( ( r - l + 1 ) == 2 ) {
                 mp[sum] ++ ;
             }
             r ++ ;
        }
        return false ;
    }
};
