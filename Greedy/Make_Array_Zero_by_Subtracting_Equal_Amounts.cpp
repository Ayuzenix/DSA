#include<bits/stdc++.h>
using namespace std ;

// Problem : Make Array Zero by Subtracting Equal Amounts 
// Platform : Leetcode 

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort( nums.begin() , nums.end() ) ;
        int prev = nums[0] , count = 0 ;
        if ( prev != 0 ) {
            count = 1 ;
        }
        for ( int i = 1 ; i < nums.size() ; i ++ ) {
            while ( i < nums.size() && nums[i] == nums[i-1] ) {
                i ++ ;
            }
            if ( i < nums.size() && nums[i] != 0 ) {
                count ++ ;
            }
        }
        return count ;
    }
};
