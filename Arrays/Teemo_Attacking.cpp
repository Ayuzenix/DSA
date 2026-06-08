#include<bits/stdc++.h>
using namespace std ;

// Problem : Teemo Attacking 
// Platform : Leetcode 

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size() , curr = 0 , prev = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             int till = ( timeSeries[i] + duration ) ;
             if ( prev >= timeSeries[i] ) {
                 curr = curr + ( till - timeSeries[i]) + ( timeSeries[i] - prev ) ;
             } else {
                 curr = curr + ( till - timeSeries[i] ) ;
             }
             prev = till ;
        }
        return curr ;
    }
};
