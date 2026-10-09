#include<bits/stdc++.h>
using namespace std ;

// Problem : Append K Integers With Minimal Sum 
// Platform : Leetcode 

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long n = nums.size() ;
        long long sum = 0 ; 
        // for ( int i = 0 ; i < n ; i ++ ) {
        //      sum = sum + nums[i] ;
        // }
        sort( nums.begin() , nums.end() ) ;
        long long first = nums[0] - 1 ; 
        // first = min( first , k ) ;
        if ( k < first ) {
            first = k ;
        } 
        sum = sum + ( long long )( ( ( long long )( first ) * ( long long )( first + 1 ) ) / 2 ) ;
        k = k - first ; 
        for ( long long i = 0 ; i < n - 1 ; i ++ ) {
             if ( k == 0 ) {
                 break ; 
             }
             long long curr = nums[i] , next = nums[i+1] ;
             long long between = ( next - curr - 1 ) ;
             if ( between == 0 || next == curr ) {
                 continue ;
             } else {
                if ( k < between ) {
                    between = k ; 
                }
                int till = curr + between ; 
                // sum = sum + ( ( till * ( till + 1 ) ) / 2 ) - ( ( curr * ( curr + 1 ) ) / 2 ) ;
                long long x = ( long long )( ( long long )( till)* ( long long)( till + 1 ) / 2 ) ;
                long long y = ( long long )( ( long long )( curr )*( long long )( curr + 1 ) / 2 ) ;
                sum = sum + x - y ; 
                k = k - between ;
             }      
        }
        if ( k > 0 ) {
            long long till = nums[n-1] + k ; 
            // sum = sum + ( ( ( till * ( till + 1 ) ) / 2 ) - ( ( nums[n-1] * ( nums[n-1] + 1 ) ) / 2) ) ;
            long long x = ( long long )( ( long long )( till)* ( long long)( till + 1 ) / 2 ) ;
            long long y = ( long long )( ( long long )( nums[n-1] )*( long long )( nums[n-1] + 1) / 2 )  ;
            sum = sum + x - y ; 
            k = 0 ;  
        }
        return sum ; 
    }
};
