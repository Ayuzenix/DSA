#include<bits/stdc++.h> 
using namespace std ;

// Problem : Chocolate Distribution Problem 
// Platform : Leetcode 

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size() ;
        int maxi = INT_MIN , mini = INT_MAX , l = 0 , r = 0 , ans = INT_MAX ;
        sort( a.begin() , a.end() ) ;
        while ( r < n ) {
            maxi = max( maxi , a[r] ) ;
            mini = min( mini , a[l] ) ;
            if ( ( r - l + 1 ) == m ) {
                ans = min( ans , maxi - mini ) ;
                l ++ ;
                mini = a[l] ;
            }
            r ++ ;
        }
        return ans ;
    }
};
