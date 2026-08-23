#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Score by Changing Two Elements 
// Platform : Leetcode 

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size() ; 
        if ( n <= 3 ) {
            return 0 ;
        }
        sort( nums.begin() , nums.end() ) ;
        int sum = 0 , c1 = 0 , c2 = 0 , c3 = 0 ;
        c1 = nums[n-2] - nums[1] , c2 = nums[n-1] - nums[2] ,  c3 = nums[n-3] - nums[0] ;
        c1 = min( c1 , c2 ) ;
        return min( c1 , c3 ) ;
    }
};
