#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Sum After At Most K Digit Rearrangements 
// Platform : Leetcode 

class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long n = nums.size() ;
        long long sum = 0 ;
        priority_queue<pair<long long,long long>>pq ; 
        unordered_map<long long,long long>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             string str = to_string( nums[i] ) ;
             sort( str.rbegin() , str.rend() ) ;
             long long curr = stoll( str ) ;
             long long diff = ( curr - ( long long )( nums[i] ) ) ;
             pq.push( { diff , i } ) ;
        }
        while ( k > 0 && !pq.empty() ) {
            sum = sum + ( pq.top().first + ( long long )( nums[pq.top().second] ) ) ;
            mp[pq.top().second] ++ ; 
            pq.pop() ;
            k -- ; 
        } 
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( mp.find( i ) == mp.end() ) {
                 sum = sum + ( long long ) ( nums[i] ) ;
                 mp[i] ++ ; 
             }
        }
        return sum ; 
    }
};
