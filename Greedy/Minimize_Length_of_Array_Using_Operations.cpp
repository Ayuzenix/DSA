#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimize Length of Array Using Operations 
// Platform : Leetcode 

class Solution {
public:
    int minimumArrayLength(vector<int>& nums) {
        int n = nums.size() , countZeros = 0 ;
        sort( nums.begin() , nums.end() ) ;
        int l = 0 , r = n - 1 ;       
        while ( l <= r ) {
             int leftSide = nums[l] , rightSide = nums[r] ;
             int modulo = ( leftSide % rightSide ) ;
             if ( modulo == 0 ) {
                 countZeros ++ ;
                 l ++ ;
                 r -- ;
             } else {
                int isMini = rightSide % leftSide ;
                if ( isMini < leftSide && isMini != 0  ) { // Is Modulo can still be Minimized 
                    nums[l] = isMini ;
                    r -- ;
                } else {
                    r -- ;
                }
             }
        }
        return countZeros ;
    }
};
