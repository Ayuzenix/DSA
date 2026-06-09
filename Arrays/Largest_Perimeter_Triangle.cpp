#include<bits/stdc++.h>
using namespace std ;

// Problem : Largest Perimeter Triangle 
// Platform : Leetcode 

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size() , maxi = 0 ;
        sort( nums.rbegin() , nums.rend() ) ;
        for ( int i = 0 ; i < n - 2 ; i ++ ) {
             int x = nums[i] , y = nums[i+1] , z = nums[i+2] ;
             if ( ( ( x + y ) > z ) && (( y + z ) > x ) && ( ( z + x ) > y ) ) {
                 maxi = max( maxi , ( x + y + z )) ;
             }
        }
        return maxi ;
    }
};
