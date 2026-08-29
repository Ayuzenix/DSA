#include<bits/stdc++.h>
using namespace std ;

// Problem : Determine the Minimum Sum of a k-avoiding Array
// Platform : Leetcode 

class Solution {
public:
    int minimumSum(int n, int k) {
        int sum = 0 , curr = 1 ;
        unordered_map<int,int>mp ;
        while ( n > 0 ) {
            int x = k - curr ;
            if ( mp.find( x ) == mp.end() ) {
                 sum = sum + curr ;
                 mp[curr] ++ ;
                 curr ++ ;
                 n -- ;
            } else {
             curr ++ ;
            }
        }
        return sum ;
    }
};
