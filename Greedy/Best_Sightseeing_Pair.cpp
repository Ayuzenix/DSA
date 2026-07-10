#include<bits/stdc++.h>
using namespace std ;

// Problem : Best Sightseeing Pair 
// Platform : Leetcode 

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size() ;
        vector<int>first( n ) ;
        vector<int>second( n ) ;
        for ( int i = 0 ; i < n - 1 ; i ++ ) {
            first[i] = ( values[i] + i ) ;
        }
        for ( int i = n - 1 ; i > 0 ; i -- ) {
            second[i] = values[i] - i ;
        } 
        int maxi = second[n-1] ;
        for ( int i = n - 2 ; i > 0 ; i -- )  {
             int curr = second[i] ;
             second[i] = maxi ;
             maxi = max( maxi , curr ) ;
        }
        second[0] = maxi ;
        int result = INT_MIN ;
        for ( int i = 0 ; i < n - 1 ; i ++ ) {
            result = max( result , first[i] + second[i] ) ;
        }
        return result ;
    }
};
