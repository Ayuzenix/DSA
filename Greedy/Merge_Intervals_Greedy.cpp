#include<bits/stdc++.h>
using namespace std ;

// Problem : Merge Intervals ( Greedy ) 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size() , r = 0 ;
        sort( intervals.begin() , intervals.end() ) ;
        vector<vector<int>>store ;
        while ( r < n ) {
            int from = intervals[r][0] , till = intervals[r][1] ;
            while ( r < ( n - 1 ) && till >= intervals[r+1][0] ) {
                till = max( till , intervals[r+1][1] ) ;
                r ++ ;
            }
            store.push_back( { from , till } ) ;
            r ++ ; 
        }
        return store ;
    }
};
