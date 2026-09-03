#include<bits/stdc++.h>
using namespace std ;

// Problem : Apply Operations to Make Sum of Array Greater Than or Equal to k 
// Platform : Leetcode 

class Solution {
public:
    int minOperations(int k) {
        if ( k == 1 ) { // Edge Case 
             return 0 ;
        }
        long long curr = 1 , count = 0 , mini = INT_MAX ;
        while ( curr <= ( k / 2 ) ) {
             long long atPresent = curr ;
             if ( ( k % curr ) == 0 ) {
                 long long value = count + ( k / curr ) - 1 ;
                 mini = min( mini , value ) ;
             } else {
                 long long value = count + ( k / curr ) ;
                 mini = min( mini , value ) ;
             }
             curr ++ ;
             count ++ ;
        }
        return mini ;
    }
};
