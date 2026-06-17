#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Value at a Given Index in a Bounded Array 
// Platform : Leetcode 

class Solution {
public:  
    long long toCheck( int mid , int index , int n ) {
       long long right = ( n - index ) ;
       long long sum = 0 ;
       if ( mid <= right ) {
          long long rem = ( right - mid ) ;
          long long x = right - rem ;
          sum = sum + ( x * mid ) - ( ( ( x - 1 ) * ( x ) ) / 2  ) + rem ;
       }else {
         sum = sum + ( right * mid ) - ( ( ( right - 1 ) * ( right ) ) / 2 ) ;
       }
       long long mid2 = mid - 1 ;
       long long left = ( index ) ;
       if ( mid2 <= left ) {
        long long rem = ( left - mid2 ) ;
        long long x = ( left - rem ) ;
        sum = sum + ( x * mid2 ) -  ( ( ( x - 1 ) * ( x ) ) / 2 ) + rem ;
       } else {
        sum = sum + ( left * mid2  ) -  ( (  ( left - 1 ) * ( left ) ) / 2 ) ;
       }
       return sum ;
    }

    int maxValue(int n, int index, int maxSum) {
        long long low = 1 , high = maxSum , ans = -1 ;
        while ( low <= high ) {
            long long mid = ( low + high ) / 2 ;
            if ( toCheck( mid , index , n ) <= maxSum ) {
                ans = mid ;
                low = mid + 1 ;
            } else {
                high = mid - 1 ;
            }
        }
        return ans ;
    }
};
