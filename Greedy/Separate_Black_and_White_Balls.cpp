#include<bits/stdc++.h>
using namespace std ;

// Problem : Separate Black and White Balls 
// Platform : Leetcode 

class Solution {
public:
    long long minimumSteps(string s) {
        long long n = s.size() , leftSwap = 0 , rightSwap = 0 , rightToleftZeros = 0 , leftTorightZeros = 0 ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
             if ( s[i] == '0' ) {
                 rightToleftZeros ++ ;
             } else {
                if ( rightToleftZeros > 0 ) {
                    leftSwap = leftSwap + rightToleftZeros ;
                }
             }
        }
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( s[i] == '1' ) {
                 leftTorightZeros ++ ;
             } else {
                 if ( leftTorightZeros > 0 ) {
                     rightSwap = rightSwap + leftTorightZeros ;
                 }
             }
        }
        return min( leftSwap , rightSwap ) ;
    }
};
