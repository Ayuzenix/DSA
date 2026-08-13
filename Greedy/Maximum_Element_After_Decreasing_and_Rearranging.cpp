#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Element After Decreasing and Rearranging
// Platform : Leetcode 

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size() ;
        sort( arr.begin() , arr.end() ) ; 
        int prev = arr[0] ;
        for ( int i = 0 ; i < n ; i ++ ) { 
             if ( i == 0 ) {
                 if ( arr[0] != 1 ) {
                    arr[0] = 1 ;
                 }
             } else {
                 if ( ( arr[i] - arr[i-1] ) >=2 ) {
                     arr[i] = ( arr[i-1] + 1 ) ;
                 }
             }
        }
        return arr[n-1] ;
    }
};
