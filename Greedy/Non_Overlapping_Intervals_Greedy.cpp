#include<bits/stdc++.h>
using namespace std ;

// Problem : Non-overlapping Intervals ( Greedy )
// Platform : Leetcode 

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size() , count = 0 , r = 0 ;
        sort( intervals.begin() , intervals.end() ) ; 
        while ( r < n ) {
            int curr = intervals[r][1] ; 
            while ( r < ( n - 1 ) && curr > intervals[r+1][0] ) {
                   count ++ ;
                   curr = min( curr , intervals[r+1][1] ) ; 
                   r ++ ;   
            }
            r ++ ;
        }
        return count ;
    }
};
