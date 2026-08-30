#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Minimum Possible Sum of Beautiful Array 
// Platform : Leetcode 

class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        long long mid = ( target ) / 2 ;
        long long sum = 0 ;
        long long mod = 1e9 + 7 ;
        if ( n <= mid ) {
            return  ( ( ( long long ) n * ( n + 1 ) ) / 2 ) % mod ;
        }
        sum = ( mid * ( mid + 1 ) ) / 2 ;
        long long rem = n - mid ;
        long long till = target + ( rem - 1 ) ;
        long long sec =  ( ( ( long long ) till * ( till + 1 ) ) / 2 ) % mod ; 
        long long ext =  ( ( ( long long ) target * ( target - 1 ) ) / 2 ) % mod ;
        sum = sum +  sec - ext ;
        sum = sum % mod ;
        return sum ;
    }
};
