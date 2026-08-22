#include<bits/stdc++.h>
using namespace std ;

// Problem : Frog Jump II
// Platform : Leetcode 

class Solution {
public:
    int maxJump(vector<int>& stones) { // Positions of stones are in sorted order
        int n = stones.size() ;
        vector<int>even ;
        vector<int>odd ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( i % 2 == 0 ) {
                 even.push_back( stones[i] ) ;
             } else {
                 odd.push_back( stones[i] ) ;
             }
        }
        int maxi = INT_MIN ;
        for ( int i = 1 ; i < even.size() ; i ++ ) {
             maxi = max( maxi , ( even[i] - even[i-1] ) ) ;
        }
        maxi = max( maxi , abs( even[even.size() - 1] - odd[odd.size()-1] ) ) ;
        for ( int i = odd.size() - 1 ; i > 0 ; i -- ) {
             int jump = abs( odd[i] - odd[i-1] ) ;
             maxi = max( maxi , jump ) ;
        }
        return maxi ;
    }
};
