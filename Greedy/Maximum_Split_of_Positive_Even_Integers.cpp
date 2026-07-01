#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Split of Positive Even Integers 
// Platform : Leetcode 

class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>store ;
        long long prev ;
        if ( finalSum % 2 != 0 ) {
           return store ; 
        }
        for ( long long i = 1 ; i <= finalSum ; i ++ ) {
             long long x = finalSum - ( 2 * i ) ;
             if ( x == 0 ) {
                store.push_back( 2 * i ) ;
                break ;
             } 
             if ( x % 2 == 0 && ( 2 * i ) < x ) {
                store.push_back( 2 * i ) ;
                finalSum = x ;
             }
        }
        return store ;
    }
};
