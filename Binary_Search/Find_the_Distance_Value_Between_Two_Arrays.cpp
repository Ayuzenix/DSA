#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Distance Value Between Two Arrays 
// Platform : Leetcode 

class Solution {
public: // By Lower Bound 
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size() , m = arr2.size() , count = 0 ;
        sort( arr1.begin() , arr1.end() ) ;
        sort( arr2.begin() , arr2.end() ) ;
        for ( int i = 0 ; i < n ; i ++ ) { 
            int idx = lower_bound( arr2.begin() , arr2.end() , arr1[i] ) - arr2.begin() ;
            if ( idx > 0 && idx < m ) {
                int diff1 = abs( arr2[idx] - arr1[i] ) ;
                int diff2 = abs( arr1[i] - arr2[idx-1] ) ;
                if ( diff1 <= d || diff2 <= d ) {
                    continue ;
                } else {
                    count ++ ;
                }
            } if ( idx >= m ) {
                int diff1 = abs( arr1[i] - arr2[m-1] ) ;
                if ( diff1 <= d ) {
                    continue ;
                } else {
                    count ++ ;
                }
            } else if ( idx == 0 ) {
                int diff1 = abs( arr1[i] - arr2[idx] ) ;
                if ( diff1 <= d ) {
                    continue ;
                } else {
                    count ++ ;
                }
            }
        }
        return count ;
    }
};
