#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Difference Between Largest and Smallest Value in Three Moves 
// Platoform : Leetcode 

class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size() ;
        if ( n <=4 ) return 0 ;
        sort( nums.begin() , nums.end() ) ;
        int maxi1 = *max_element( nums.begin() + 3  , nums.end() ) , mini1 = *min_element( nums.begin() + 3 , nums.end() ) ;
        int maxi2 = *max_element( nums.begin() , nums.end() - 3 ) , mini2 = *min_element( nums.begin() , nums.end() - 3 ) ;
        int result1 = min( maxi2 - mini2 , maxi1 - mini1 ) ;
        maxi1 = *max_element( nums.begin() + 1 , nums.end() - 2 ) , mini1 = *min_element( nums.begin() + 1 , nums.end() - 2 ) ;
        maxi2 = *max_element( nums.begin() + 2 , nums.end() - 1 ) , mini2 = *min_element( nums.begin() + 2 , nums.end() - 1 ) ;
        int result2 = min( maxi1 - mini1 , maxi2 - mini2 ) ;
        return min( result1 , result2 ) ;
    }
};
