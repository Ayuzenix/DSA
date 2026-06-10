#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Cost of Buying Candies With Discount 
// Platform : Leetcode 

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size() , total = 0 , l = 0 ;
        sort( cost.rbegin() , cost.rend() ) ;
        while ( l < n - 1 ) {
            int x = cost[l] ;
            int y = cost[l+1] ;
            total = total + x + y ;
            cost[l] = -1 , cost[l+1] = -1 ;
            if ( ( l + 2 ) < n ) {
                cost[l+2] = -1 ;
            }
            l = l + 3 ;
        }
        if ( cost[n-1] != -1 ) {
            total = total + cost[n-1] ;
        }
        return total ;
    }
};
