#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Moves to Reach Target Score 
// Platform : Leetcode 

class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        long long totalSteps = 0 ;
        while ( target > 1 ) {
            if ( target % 2 == 0 ) {
                if ( maxDoubles > 0 ) {
                    totalSteps ++ ;
                    target = target / 2 ;
                    maxDoubles -- ;
                } else {
                   if ( maxDoubles == 0 ) {
                    totalSteps = totalSteps + ( target - 1 ) ;
                    target = 1 ;
                   }
                }
            } else {
                target = target - 1 ;
                totalSteps ++ ;
            }
        }
        return totalSteps ;
    }
};
