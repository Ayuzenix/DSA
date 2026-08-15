#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Food Buckets to Feed the Hamsters
// Platform : Leetcode 

class Solution {
public:
    int minimumBuckets(string hamsters) {
        int n = hamsters.size() ;
        if ( n == 1 ) {
             if ( hamsters[0] == 'H' ) {
                 return -1 ;
             }
             return 0 ;
        }
        if ( n >= 2 ) {
             if ( hamsters[0] == 'H' && hamsters[1] == 'H' ) return -1 ;
             if ( hamsters[n-1] == 'H' && hamsters[n-2] == 'H' ) return -1 ;
        }
        for ( int i = 1 ; i < n - 1 ; i ++ ) {
             if ( hamsters[i] == 'H' && hamsters[i-1] == 'H' && hamsters[i+1] == 'H' ) {
                 return -1 ;
             }
        }
        int foodPlaced = 0 , i = n - 1 ;
        while ( i > 0 ) {
            if ( hamsters[i] == 'H' ) {
                if ( i == n - 1 && hamsters[i-1] == 'H' ) {
                    return -1 ;
                } else if ( i == n - 1 && hamsters[i-1] == '.' ) {
                    foodPlaced ++ ;
                    hamsters[i-1] = 'f' ;
                    i -- ;
                } else {
                    if ( hamsters[i-1] == 'f' || hamsters[i+1] == 'f' ) {
                     i -- ;
                 } else if ( hamsters[i-1] == '.' ) {
                     hamsters[i-1] = 'f' ;
                     foodPlaced ++ ;
                     i -- ;
                 } else if ( hamsters[i+1] == '.' ) {
                     hamsters[i+1] = 'f' ;
                     foodPlaced ++ ;
                     i -- ;
                 } else {
                    return -1 ;
                 }
                }
            } else {
                i -- ;
            }
        }
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( i == 0 && hamsters[i] == 'H' && hamsters[i+1] == '.' ) {
                 foodPlaced ++ ;
                 hamsters[i+1] = 'f' ;
             }
             if ( i == n - 1 && hamsters[i] == 'H' && hamsters[i-1] == '.' ) {
                 foodPlaced ++ ;
                 hamsters[i-1] = 'f' ;
             }
        }
        return foodPlaced ;
    }
};
