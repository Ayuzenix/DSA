#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Sum Obtained of Any Permutation 
// Platform : Leetcode 

class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        long long ml = 1e9 + 7 ;
        sort( requests.begin() , requests.end() ) ;
        int n = nums.size() ;
        vector<int>prefix( n , 0 ) ;
        for ( int i = 0 ; i < requests.size() ; i ++ ) {
             prefix[requests[i][0]] = prefix[requests[i][0]] + 1 ;
             if ( ( requests[i][1] + 1 ) < n  ) {
                 prefix[requests[i][1] + 1 ] = prefix[requests[i][1] + 1 ] - 1 ;
             }
        }
        for ( int i = 1 ; i < n ; i ++ ) {
             prefix[i] = prefix[i] + prefix[i-1] ;
        }
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { prefix[i] , i } ) ;
        }
        sort( store.rbegin() , store.rend() ) ;
        sort( nums.rbegin() , nums.rend() ) ;
        long long ans = 0 , idx = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             long long x = nums[idx] , y = store[i][0] ;
             long long toadd = ( x * y ) % ml ;
             ans = ans + toadd  ;
             ans = ans % ml ;
             idx ++ ;
        }
        return ans ;
    }
};
