#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Processing Time 
// Platform : Leetcode 

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int n = processorTime.size() , m = tasks.size() ;
        sort( processorTime.begin() , processorTime.end() ) ;
        sort( tasks.rbegin() , tasks.rend() ) ;
        int l = 0 , r = 0 , maxTimeTaken = INT_MIN ;
        while ( l < n && r < m ) {
             int currmaxi = INT_MIN , count = 0 ;
             while ( r < m && count < 4 ) {
                 currmaxi = max( currmaxi , ( processorTime[l] + tasks[r] ) ) ;
                 r ++ ;
                 count ++ ;
             }
             maxTimeTaken = max( maxTimeTaken , currmaxi ) ; 
             l ++ ;
        }
        return maxTimeTaken ;
    }
};
