#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
// Platform : Leetcode 

class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        long long n = nums.size() ; 
        priority_queue<int>pq1 ;
        priority_queue<int,vector<int>,greater<int>>pq2 ;
        unordered_map<int,int>mp ;
        long long maxlen = 0 , maxCurr = INT_MIN , minCurr = INT_MAX , l = 0 , r = 0 ;
        while ( r < n ) {
              mp[nums[r]] ++ ;
              pq1.push( nums[r] ) ;
              pq2.push( nums[r] ) ;
              maxCurr = pq1.top() ;
              minCurr = pq2.top() ;
              while ( l <= r && ( ( maxCurr - minCurr ) > limit ) ) {
                 mp[nums[l]] -- ;
                 if ( mp[nums[l]] == 0 ) {
                     mp.erase( nums[l] ) ;
                 }
                 while ( !pq1.empty() && mp.find( pq1.top() ) == mp.end() ) {
                     pq1.pop() ;
                 }
                 while ( !pq2.empty() && mp.find( pq2.top() ) == mp.end() ) {
                     pq2.pop() ;
                 }
                 maxCurr = pq1.top() ;
                 minCurr = pq2.top() ;
                 l ++ ;
              }
              if ( ( maxCurr - minCurr ) <= limit ) {
              maxlen = max( maxlen , ( r - l + 1 ) ) ;
              }
              r ++ ;
        }
        return maxlen ;
    }
};
