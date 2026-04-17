#include<bits/stdc++.h>
using namespace std ;

// Problem : Removing Maximum and Minimum from array 
// Platform : Leetcode 

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size() , first = -1 , second = -1 ;
        int maxi = INT_MIN , mini = INT_MAX ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( nums[i] > maxi ) {
                maxi = nums[i] ;
                first = i ;
            }
            if (nums[i] < mini ) {
                mini = nums[i] ;
                second = i ;
            }
        }
        int x = min ( first , second ) ;
        int y = max ( first , second ) ;
        int p = ( n - x ) ;
        int q = ( y + 1 ) ;
        int r = ( x + 1 ) + ( n - y ) ;
        return min ( { p , q , r } ) ;
        
    }
};
