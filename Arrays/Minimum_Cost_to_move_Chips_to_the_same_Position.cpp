#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Cost to Move Chips to The Same Position
// Platform : Leetcode 

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size() ;
        int maxEven = INT_MIN ;
        int maxOdd = INT_MIN ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( position[i] % 2 == 0 ) {
                maxEven = max( maxEven , position[i] ) ;
             }
             if ( position[i] % 2 != 0 ) {
                maxOdd = max( maxOdd , position[i] ) ;
              }
        }
        int f_even = 0 , f_odd = 0 ;
        if ( maxEven != INT_MIN ) {
            for ( int i = 0 ; i < n ; i ++ ) {
                if  ( position[i] != maxEven && position[i] % 2 != 0 ) {
                     f_even ++ ;
                }
            }
        }
        if ( maxOdd != INT_MIN ) {
            for ( int i = 0 ; i < n ; i ++ ) {
                if ( position[i] != maxOdd && ( ( ( maxOdd - position[i] ) % 2 ) != 0  ) ) {
                    f_odd ++ ;
                }
            }
        }
        if ( maxEven == INT_MIN ) {
            return f_odd ;
        }else if ( maxOdd == INT_MIN ) {
            return f_even ;
        }
        return min( f_odd , f_even ) ;
    }
};
