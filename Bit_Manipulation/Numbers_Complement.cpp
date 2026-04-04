#include<bits/stdc++.h>
using namespace std ;

// Problem : Numbers Complement 
// Platform : Leetcode 

class Solution {
public:
    int findComplement(int num) {
        int n = (log2(num)) + 1 ; // Total Number of Bits
        for ( int i = 0 ; i < n ; i ++ ) {
            num = num ^ ( 1 << i ) ; // Flipping till Most Significant bits 
        }
        return num ;
    }
};
