#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Levels to Gain More Points 
// Platform : Leetcode 

class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n = possible.size() , sum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( possible[i] == 0 ) {
                sum = sum - 1 ;
            } else {
                sum = sum + 1 ;
            }
        }
        int curr = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( possible[i] == 0 ) {
                curr = curr - 1 ;
            } else {
                curr = curr + 1 ;
            }
            int rem = ( sum - curr ) ;
            if ( ( curr ) > rem && ( i != n - 1 ) ) { // Both Should have Played atleast one game 
                return ( i + 1 ) ;
            }
        }
        return -1 ;
    }
};
