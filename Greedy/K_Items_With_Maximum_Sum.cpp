#include<bits/stdc++.h>
using namespace std ;

// Problem : K Items With the Maximum Sum 
// Platform : Leetcode 

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int curr = 0 , r = k ;
        while ( r > 0 && numOnes > 0 ) {
            curr = curr + 1 ;
            numOnes -- ;
            r -- ;
        }
        while ( r > 0 && numZeros > 0 ) {
            r -- ;
            numZeros -- ;
        }
        while ( r > 0 && numNegOnes > 0 ) {
            curr = curr - 1 ;
            numNegOnes -- ;
            r -- ;
        }
        return curr ;
    }
};
