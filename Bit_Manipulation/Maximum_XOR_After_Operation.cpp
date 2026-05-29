#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum XOR after Operations 
// Platform : Leetcode 

class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        sort( nums.begin() , nums.end() ) ;  
        int n  ;
        if ( nums[nums.size() - 1 ] == 0  ) {
            return 0 ;
        } else {
         n = log2( nums[nums.size() - 1 ]) + 1 ;
        }
        int ans = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             for ( int j = 0 ; j < nums.size() ; j ++ ) {
                int x = ( nums[j] & ( 1 << i ) ) ;
                if ( x != 0 ) {
                    ans = ( ans | ( 1 << i ) )  ;
                    break ;
                 }
             }
        }
        return ans ;
    }
};
