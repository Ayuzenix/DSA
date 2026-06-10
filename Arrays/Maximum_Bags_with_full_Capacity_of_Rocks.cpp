#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Bags With Full Capacity of Rocks 
// Platform : Leetcode 

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size() , rem = additionalRocks ;
        vector<int>diff( n ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            diff[i] = ( capacity[i] - rocks[i] ) ;
        }
        sort( diff.begin() , diff.end() ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( diff[i] == 0 ) {
                continue ;
            }else {
                 if ( rem >= diff[i] ) {
                    rem = rem - diff[i] ;
                    diff[i] = 0 ;
                 } else {
                    break ;
                 }
            }
        }
        int ans = 0 ;
        for (int i = 0 ; i < n ; i ++ ) {
            if ( diff[i] == 0 ) {
                ans ++ ;
            }
        }
        return ans ;
    }
};
