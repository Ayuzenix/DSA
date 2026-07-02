#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Time to Make Rope Colorful 
// Platform : Leetcode 

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int minScore = 0 , n = colors.size() , l = 0 , r = 0 ;
        while ( r < n ) {
            int curr = 0  , maxi = 0 ;
            while ( r < n && colors[r] == colors[l] ) {
                curr = curr + neededTime[r] ;
                maxi = max( maxi , neededTime[r] ) ;
                r ++ ;
            }
            if ( ( r - l + 1 ) > 2 ) {
                minScore = minScore + ( curr - maxi ) ;
            }
            l = r ;
        }
        return minScore ;
    }
};
