#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Suffix Flips 
// Platform : Leetcode 

class Solution {
public:
    int minFlips(string target) {
        int n = target.size() , prev = 0 , count = 0 , i = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( prev != ( target[i] - '0' ) ) {
                 prev = ( target[i] - '0' ) ;
                 count ++ ;
             }
        }
        return count ;
    }
};
