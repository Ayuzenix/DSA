#include<bits/stdc++.h>
using namespace std;

// Problem : Power of Two 
// Platform : Leetcode

class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long curr = (long long) n;
        if ( curr == 0 ) {
            return false;
        }
        if ( curr == 1 ) {
            return true ;
        }
        if ( ( curr & ( curr - 1 )) !=0 ) {
            return false ;
        }
        return true ;
    }
};
